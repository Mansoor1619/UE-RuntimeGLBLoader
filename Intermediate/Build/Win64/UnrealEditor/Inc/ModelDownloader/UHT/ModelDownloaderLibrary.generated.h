// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelDownloaderLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UStaticMesh;
#ifdef MODELDOWNLOADER_ModelDownloaderLibrary_generated_h
#error "ModelDownloaderLibrary.generated.h already included, missing '#pragma once' in ModelDownloaderLibrary.h"
#endif
#define MODELDOWNLOADER_ModelDownloaderLibrary_generated_h

#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_10_DELEGATE \
MODELDOWNLOADER_API void FOnModelDownloadComplete_DelegateWrapper(const FScriptDelegate& OnModelDownloadComplete, bool bSuccess, const FString& FilePath, const FString& ErrorMessage);


#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_11_DELEGATE \
MODELDOWNLOADER_API void FOnModelImportComplete_DelegateWrapper(const FScriptDelegate& OnModelImportComplete, bool bSuccess, UStaticMesh* StaticMesh, const FString& ErrorMessage);


#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnStaticMesh); \
	DECLARE_FUNCTION(execDownloadAndImportModel); \
	DECLARE_FUNCTION(execImportGLBModel); \
	DECLARE_FUNCTION(execDownloadModel);


#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelDownloaderLibrary(); \
	friend struct Z_Construct_UClass_UModelDownloaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UModelDownloaderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelDownloader"), NO_API) \
	DECLARE_SERIALIZER(UModelDownloaderLibrary)


#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelDownloaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelDownloaderLibrary(UModelDownloaderLibrary&&); \
	UModelDownloaderLibrary(const UModelDownloaderLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelDownloaderLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelDownloaderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelDownloaderLibrary) \
	NO_API virtual ~UModelDownloaderLibrary();


#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_13_PROLOG
#define FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELDOWNLOADER_API UClass* StaticClass<class UModelDownloaderLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VideoDownloader_Plugins_ModelDownloader_Source_ModelDownloader_Public_ModelDownloaderLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
