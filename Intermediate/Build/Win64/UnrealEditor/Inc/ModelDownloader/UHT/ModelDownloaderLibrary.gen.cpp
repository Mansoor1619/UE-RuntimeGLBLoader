// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelDownloader/Public/ModelDownloaderLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelDownloaderLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MODELDOWNLOADER_API UClass* Z_Construct_UClass_UModelDownloaderLibrary();
MODELDOWNLOADER_API UClass* Z_Construct_UClass_UModelDownloaderLibrary_NoRegister();
MODELDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature();
MODELDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ModelDownloader();
// End Cross Module References

// Begin Delegate FOnModelDownloadComplete
struct Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics
{
	struct _Script_ModelDownloader_eventOnModelDownloadComplete_Parms
	{
		bool bSuccess;
		FString FilePath;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_ModelDownloader_eventOnModelDownloadComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ModelDownloader_eventOnModelDownloadComplete_Parms), &Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModelDownloader_eventOnModelDownloadComplete_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModelDownloader_eventOnModelDownloadComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModelDownloader, nullptr, "OnModelDownloadComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::_Script_ModelDownloader_eventOnModelDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::_Script_ModelDownloader_eventOnModelDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnModelDownloadComplete_DelegateWrapper(const FScriptDelegate& OnModelDownloadComplete, bool bSuccess, const FString& FilePath, const FString& ErrorMessage)
{
	struct _Script_ModelDownloader_eventOnModelDownloadComplete_Parms
	{
		bool bSuccess;
		FString FilePath;
		FString ErrorMessage;
	};
	_Script_ModelDownloader_eventOnModelDownloadComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.FilePath=FilePath;
	Parms.ErrorMessage=ErrorMessage;
	OnModelDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnModelDownloadComplete

// Begin Delegate FOnModelImportComplete
struct Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics
{
	struct _Script_ModelDownloader_eventOnModelImportComplete_Parms
	{
		bool bSuccess;
		UStaticMesh* StaticMesh;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_ModelDownloader_eventOnModelImportComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ModelDownloader_eventOnModelImportComplete_Parms), &Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModelDownloader_eventOnModelImportComplete_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModelDownloader_eventOnModelImportComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModelDownloader, nullptr, "OnModelImportComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::_Script_ModelDownloader_eventOnModelImportComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::_Script_ModelDownloader_eventOnModelImportComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnModelImportComplete_DelegateWrapper(const FScriptDelegate& OnModelImportComplete, bool bSuccess, UStaticMesh* StaticMesh, const FString& ErrorMessage)
{
	struct _Script_ModelDownloader_eventOnModelImportComplete_Parms
	{
		bool bSuccess;
		UStaticMesh* StaticMesh;
		FString ErrorMessage;
	};
	_Script_ModelDownloader_eventOnModelImportComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.StaticMesh=StaticMesh;
	Parms.ErrorMessage=ErrorMessage;
	OnModelImportComplete.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnModelImportComplete

// Begin Class UModelDownloaderLibrary Function DownloadAndImportModel
struct Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics
{
	struct ModelDownloaderLibrary_eventDownloadAndImportModel_Parms
	{
		UObject* WorldContextObject;
		FString URL;
		FString SavePath;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Model Downloader" },
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadAndImportModel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadAndImportModel_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadAndImportModel_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadAndImportModel_Parms, OnComplete), Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4178084091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelDownloaderLibrary, nullptr, "DownloadAndImportModel", nullptr, nullptr, Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::ModelDownloaderLibrary_eventDownloadAndImportModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::ModelDownloaderLibrary_eventDownloadAndImportModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelDownloaderLibrary::execDownloadAndImportModel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModelDownloaderLibrary::DownloadAndImportModel(Z_Param_WorldContextObject,Z_Param_URL,Z_Param_SavePath,FOnModelImportComplete(Z_Param_OnComplete));
	P_NATIVE_END;
}
// End Class UModelDownloaderLibrary Function DownloadAndImportModel

// Begin Class UModelDownloaderLibrary Function DownloadModel
struct Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics
{
	struct ModelDownloaderLibrary_eventDownloadModel_Parms
	{
		UObject* WorldContextObject;
		FString URL;
		FString SavePath;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Model Downloader" },
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadModel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadModel_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadModel_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventDownloadModel_Parms, OnComplete), Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1280571758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelDownloaderLibrary, nullptr, "DownloadModel", nullptr, nullptr, Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::ModelDownloaderLibrary_eventDownloadModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::ModelDownloaderLibrary_eventDownloadModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelDownloaderLibrary::execDownloadModel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModelDownloaderLibrary::DownloadModel(Z_Param_WorldContextObject,Z_Param_URL,Z_Param_SavePath,FOnModelDownloadComplete(Z_Param_OnComplete));
	P_NATIVE_END;
}
// End Class UModelDownloaderLibrary Function DownloadModel

// Begin Class UModelDownloaderLibrary Function ImportGLBModel
struct Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics
{
	struct ModelDownloaderLibrary_eventImportGLBModel_Parms
	{
		UObject* WorldContextObject;
		FString FilePath;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Model Downloader" },
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventImportGLBModel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventImportGLBModel_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventImportGLBModel_Parms, OnComplete), Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4178084091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelDownloaderLibrary, nullptr, "ImportGLBModel", nullptr, nullptr, Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::ModelDownloaderLibrary_eventImportGLBModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::ModelDownloaderLibrary_eventImportGLBModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelDownloaderLibrary::execImportGLBModel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModelDownloaderLibrary::ImportGLBModel(Z_Param_WorldContextObject,Z_Param_FilePath,FOnModelImportComplete(Z_Param_OnComplete));
	P_NATIVE_END;
}
// End Class UModelDownloaderLibrary Function ImportGLBModel

// Begin Class UModelDownloaderLibrary Function SpawnStaticMesh
struct Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics
{
	struct ModelDownloaderLibrary_eventSpawnStaticMesh_Parms
	{
		UObject* WorldContextObject;
		UStaticMesh* StaticMesh;
		FVector Location;
		FRotator Rotation;
		FVector Scale;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Model Downloader" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventSpawnStaticMesh_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventSpawnStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventSpawnStaticMesh_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventSpawnStaticMesh_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventSpawnStaticMesh_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelDownloaderLibrary_eventSpawnStaticMesh_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelDownloaderLibrary, nullptr, "SpawnStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::ModelDownloaderLibrary_eventSpawnStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::ModelDownloaderLibrary_eventSpawnStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelDownloaderLibrary::execSpawnStaticMesh)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UModelDownloaderLibrary::SpawnStaticMesh(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UModelDownloaderLibrary Function SpawnStaticMesh

// Begin Class UModelDownloaderLibrary
void UModelDownloaderLibrary::StaticRegisterNativesUModelDownloaderLibrary()
{
	UClass* Class = UModelDownloaderLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadAndImportModel", &UModelDownloaderLibrary::execDownloadAndImportModel },
		{ "DownloadModel", &UModelDownloaderLibrary::execDownloadModel },
		{ "ImportGLBModel", &UModelDownloaderLibrary::execImportGLBModel },
		{ "SpawnStaticMesh", &UModelDownloaderLibrary::execSpawnStaticMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelDownloaderLibrary);
UClass* Z_Construct_UClass_UModelDownloaderLibrary_NoRegister()
{
	return UModelDownloaderLibrary::StaticClass();
}
struct Z_Construct_UClass_UModelDownloaderLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ModelDownloaderLibrary.h" },
		{ "ModuleRelativePath", "Public/ModelDownloaderLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModelDownloaderLibrary_DownloadAndImportModel, "DownloadAndImportModel" }, // 520160144
		{ &Z_Construct_UFunction_UModelDownloaderLibrary_DownloadModel, "DownloadModel" }, // 1235857249
		{ &Z_Construct_UFunction_UModelDownloaderLibrary_ImportGLBModel, "ImportGLBModel" }, // 3971301795
		{ &Z_Construct_UFunction_UModelDownloaderLibrary_SpawnStaticMesh, "SpawnStaticMesh" }, // 1211733452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelDownloaderLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModelDownloaderLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelDownloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelDownloaderLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelDownloaderLibrary_Statics::ClassParams = {
	&UModelDownloaderLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelDownloaderLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UModelDownloaderLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModelDownloaderLibrary()
{
	if (!Z_Registration_Info_UClass_UModelDownloaderLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelDownloaderLibrary.OuterSingleton, Z_Construct_UClass_UModelDownloaderLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModelDownloaderLibrary.OuterSingleton;
}
template<> MODELDOWNLOADER_API UClass* StaticClass<UModelDownloaderLibrary>()
{
	return UModelDownloaderLibrary::StaticClass();
}
UModelDownloaderLibrary::UModelDownloaderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModelDownloaderLibrary);
UModelDownloaderLibrary::~UModelDownloaderLibrary() {}
// End Class UModelDownloaderLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModelDownloaderLibrary, UModelDownloaderLibrary::StaticClass, TEXT("UModelDownloaderLibrary"), &Z_Registration_Info_UClass_UModelDownloaderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelDownloaderLibrary), 2604935747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_1120829745(TEXT("/Script/ModelDownloader"),
	Z_CompiledInDeferFile_FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
