// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSubtitle_init() {}
	CUSTOMSUBTITLE_API UFunction* Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CustomSubtitle;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CustomSubtitle()
	{
		if (!Z_Registration_Info_UPackage__Script_CustomSubtitle.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CustomSubtitle",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAC50A20D,
				0x7095C6FD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CustomSubtitle.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CustomSubtitle.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CustomSubtitle(Z_Construct_UPackage__Script_CustomSubtitle, TEXT("/Script/CustomSubtitle"), Z_Registration_Info_UPackage__Script_CustomSubtitle, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAC50A20D, 0x7095C6FD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
