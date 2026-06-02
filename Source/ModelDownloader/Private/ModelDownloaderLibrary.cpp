#include "ModelDownloaderLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

#include "GLTFReader.h"
#include "GLTFAsset.h"
#include "GLTFMeshFactory.h"
#include "GLTFMesh.h"
#include "GLTFNode.h"

#include "MeshDescription.h"
#include "StaticMeshAttributes.h"
#include "Engine/StaticMesh.h"
#include "HAL/FileManager.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"

void UModelDownloaderLibrary::DownloadModel(UObject* WorldContextObject, const FString& URL, const FString& SavePath, FOnModelDownloadComplete OnComplete)
{
	if (URL.IsEmpty())
	{
		OnComplete.ExecuteIfBound(false, TEXT(""), TEXT("URL is empty"));
		return;
	}

	FString FinalPath = SavePath;
	if (FinalPath.IsEmpty())
	{
		FinalPath = FPaths::GetCleanFilename(URL);
		if (FinalPath.IsEmpty())
		{
			FinalPath = TEXT("model.glb");
		}
	}
	if (FPaths::IsRelative(FinalPath))
	{
		FinalPath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("ModelDownloads"), FinalPath);
	}

	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb(TEXT("GET"));

	Request->OnProcessRequestComplete().BindLambda([OnComplete, FinalPath](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bSuccess)
	{
		if (!bSuccess || !Resp.IsValid())
		{
			OnComplete.ExecuteIfBound(false, TEXT(""), TEXT("HTTP request failed"));
			return;
		}

		if (Resp->GetResponseCode() < 200 || Resp->GetResponseCode() >= 300)
		{
			FString ErrorMsg = FString::Printf(TEXT("HTTP error: %d"), Resp->GetResponseCode());
			OnComplete.ExecuteIfBound(false, TEXT(""), ErrorMsg);
			return;
		}

		TArray<uint8> FileData = Resp->GetContent();
		if (FileData.Num() == 0)
		{
			OnComplete.ExecuteIfBound(false, TEXT(""), TEXT("Downloaded file is empty"));
			return;
		}

		IFileManager::Get().MakeDirectory(*FPaths::GetPath(FinalPath), true);

		if (!FFileHelper::SaveArrayToFile(FileData, *FinalPath))
		{
			OnComplete.ExecuteIfBound(false, TEXT(""), TEXT("Failed to save file to disk"));
			return;
		}

		OnComplete.ExecuteIfBound(true, FinalPath, TEXT(""));
	});

	Request->ProcessRequest();
}

void UModelDownloaderLibrary::ImportGLBModel(UObject* WorldContextObject, const FString& FilePath, FOnModelImportComplete OnComplete)
{
	if (!FPaths::FileExists(FilePath))
	{
		OnComplete.ExecuteIfBound(false, nullptr, TEXT("File not found"));
		return;
	}

	GLTF::FFileReader Reader;
	GLTF::FAsset Asset;

	Reader.ReadFile(*FilePath, true, true, Asset);

	if (Asset.Meshes.Num() == 0)
	{
		OnComplete.ExecuteIfBound(false, nullptr, TEXT("No meshes found in model"));
		return;
	}

	TArray<FMeshDescription> MeshDescriptions;
	GLTF::FMeshFactory MeshFactory;
	MeshFactory.SetUniformScale(100.0f);

	for (const GLTF::FMesh& GltfMesh : Asset.Meshes)
	{
		FMeshDescription& MeshDescription = MeshDescriptions.AddDefaulted_GetRef();
		FStaticMeshAttributes Attributes(MeshDescription);
		Attributes.Register();

		MeshFactory.FillMeshDescription(GltfMesh, FTransform::Identity, &MeshDescription);
	}

	MeshFactory.CleanUp();

	UObject* Outer = WorldContextObject ? WorldContextObject : GetTransientPackage();
	UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Outer);

	TArray<const FMeshDescription*> MeshDescriptionPtrs;
	for (const FMeshDescription& MD : MeshDescriptions)
	{
		MeshDescriptionPtrs.Add(&MD);
	}

	UStaticMesh::FBuildMeshDescriptionsParams Params;
	Params.bBuildSimpleCollision = true;
	Params.bFastBuild = true;
	Params.bCommitMeshDescription = true;
	Params.bMarkPackageDirty = false;

	bool bBuildResult = StaticMesh->BuildFromMeshDescriptions(MeshDescriptionPtrs, Params);

	if (!bBuildResult)
	{
		OnComplete.ExecuteIfBound(false, nullptr, TEXT("Failed to build static mesh"));
		return;
	}

	OnComplete.ExecuteIfBound(true, StaticMesh, TEXT(""));
}

void UModelDownloaderLibrary::DownloadAndImportModel(UObject* WorldContextObject, const FString& URL, const FString& SavePath, FOnModelImportComplete OnComplete)
{
	if (URL.IsEmpty())
	{
		OnComplete.ExecuteIfBound(false, nullptr, TEXT("URL is empty"));
		return;
	}

	FString FinalSavePath = SavePath;
	if (FinalSavePath.IsEmpty())
	{
		FinalSavePath = FPaths::GetCleanFilename(URL);
		if (FinalSavePath.IsEmpty())
		{
			FinalSavePath = TEXT("model.glb");
		}
	}
	if (FPaths::IsRelative(FinalSavePath))
	{
		FinalSavePath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("ModelDownloads"), FinalSavePath);
	}

	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb(TEXT("GET"));

	TWeakObjectPtr<UObject> WeakContext = WorldContextObject;

	Request->OnProcessRequestComplete().BindLambda([OnComplete, FinalSavePath, WeakContext](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bSuccess)
	{
		if (!bSuccess || !Resp.IsValid() || Resp->GetResponseCode() < 200 || Resp->GetResponseCode() >= 300)
		{
			OnComplete.ExecuteIfBound(false, nullptr, TEXT("HTTP request failed"));
			return;
		}

		TArray<uint8> FileData = Resp->GetContent();
		if (FileData.Num() == 0)
		{
			OnComplete.ExecuteIfBound(false, nullptr, TEXT("Downloaded file is empty"));
			return;
		}

		IFileManager::Get().MakeDirectory(*FPaths::GetPath(FinalSavePath), true);

		if (!FFileHelper::SaveArrayToFile(FileData, *FinalSavePath))
		{
			OnComplete.ExecuteIfBound(false, nullptr, TEXT("Failed to save file"));
			return;
		}

		if (!FPaths::FileExists(FinalSavePath))
		{
			OnComplete.ExecuteIfBound(false, nullptr, TEXT("File not found after download"));
			return;
		}

		GLTF::FFileReader Reader;
		GLTF::FAsset Asset;
		Reader.ReadFile(*FinalSavePath, true, true, Asset);

		if (Asset.Meshes.Num() == 0)
		{
			OnComplete.ExecuteIfBound(false, nullptr, TEXT("No meshes found in downloaded model"));
			return;
		}

		TArray<FMeshDescription> MeshDescriptions;
		GLTF::FMeshFactory MeshFactory;
		MeshFactory.SetUniformScale(100.0f);

		for (const GLTF::FMesh& GltfMesh : Asset.Meshes)
		{
			FMeshDescription& MeshDescription = MeshDescriptions.AddDefaulted_GetRef();
			FStaticMeshAttributes Attr(MeshDescription);
			Attr.Register();
			MeshFactory.FillMeshDescription(GltfMesh, FTransform::Identity, &MeshDescription);
		}

		MeshFactory.CleanUp();

		UObject* ContextObj = WeakContext.Get();
		if (!ContextObj)
		{
			ContextObj = GetTransientPackage();
		}

		UStaticMesh* StaticMesh = NewObject<UStaticMesh>(ContextObj);

		TArray<const FMeshDescription*> MeshDescriptionPtrs;
		for (const FMeshDescription& MD : MeshDescriptions)
		{
			MeshDescriptionPtrs.Add(&MD);
		}

		UStaticMesh::FBuildMeshDescriptionsParams Params;
		Params.bBuildSimpleCollision = true;
		Params.bFastBuild = true;
		Params.bCommitMeshDescription = true;
		Params.bMarkPackageDirty = false;

		if (!StaticMesh->BuildFromMeshDescriptions(MeshDescriptionPtrs, Params))
		{
			OnComplete.ExecuteIfBound(false, nullptr, TEXT("Failed to build static mesh"));
			return;
		}

		OnComplete.ExecuteIfBound(true, StaticMesh, TEXT(""));
	});

	Request->ProcessRequest();
}

AActor* UModelDownloaderLibrary::SpawnStaticMesh(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector Location, FRotator Rotation, FVector Scale)
{
	if (!StaticMesh || !WorldContextObject)
	{
		return nullptr;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AActor* Actor = World->SpawnActor<AActor>(Location, Rotation, SpawnParams);
	if (!Actor)
	{
		return nullptr;
	}

	USceneComponent* Root = Actor->GetRootComponent();
	if (!Root)
	{
		Root = NewObject<USceneComponent>(Actor, USceneComponent::StaticClass(), TEXT("Root"));
		Actor->SetRootComponent(Root);
		Actor->AddInstanceComponent(Root);
		Root->RegisterComponent();
	}

	UStaticMeshComponent* MeshComp = NewObject<UStaticMeshComponent>(Actor, TEXT("StaticMesh"));
	MeshComp->SetStaticMesh(StaticMesh);
	MeshComp->SetWorldScale3D(Scale);
	MeshComp->SetupAttachment(Root);
	MeshComp->RegisterComponent();
	Actor->AddInstanceComponent(MeshComp);

	Actor->SetActorLocationAndRotation(Location, Rotation);

	return Actor;
}
