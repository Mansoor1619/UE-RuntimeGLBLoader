#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModelDownloaderLibrary.generated.h"

class UStaticMesh;
class AActor;

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnModelDownloadComplete, bool, bSuccess, const FString&, FilePath, const FString&, ErrorMessage);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnModelImportComplete, bool, bSuccess, UStaticMesh*, StaticMesh, const FString&, ErrorMessage);

UCLASS()
class MODELDOWNLOADER_API UModelDownloaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Model Downloader", meta = (WorldContext = "WorldContextObject"))
	static void DownloadModel(UObject* WorldContextObject, const FString& URL, const FString& SavePath, FOnModelDownloadComplete OnComplete);

	UFUNCTION(BlueprintCallable, Category = "Model Downloader", meta = (WorldContext = "WorldContextObject"))
	static void ImportGLBModel(UObject* WorldContextObject, const FString& FilePath, FOnModelImportComplete OnComplete);

	UFUNCTION(BlueprintCallable, Category = "Model Downloader", meta = (WorldContext = "WorldContextObject"))
	static void DownloadAndImportModel(UObject* WorldContextObject, const FString& URL, const FString& SavePath, FOnModelImportComplete OnComplete);

	UFUNCTION(BlueprintCallable, Category = "Model Downloader", meta = (WorldContext = "WorldContextObject"))
	static AActor* SpawnStaticMesh(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector Location, FRotator Rotation = FRotator::ZeroRotator, FVector Scale = FVector(1.0f, 1.0f, 1.0f));
};
