// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelDownloader_init() {}
	MODELDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature();
	MODELDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModelDownloader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModelDownloader()
	{
		if (!Z_Registration_Info_UPackage__Script_ModelDownloader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ModelDownloader_OnModelDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ModelDownloader_OnModelImportComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModelDownloader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x08021DDD,
				0x956B8B94,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModelDownloader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModelDownloader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModelDownloader(Z_Construct_UPackage__Script_ModelDownloader, TEXT("/Script/ModelDownloader"), Z_Registration_Info_UPackage__Script_ModelDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x08021DDD, 0x956B8B94));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
