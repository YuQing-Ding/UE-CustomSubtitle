// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubtitleRichTextBlock.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubtitleRichTextBlock() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleInterface_NoRegister();
CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleRichTextBlock();
CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleRichTextBlock_NoRegister();
CUSTOMSUBTITLE_API UFunction* Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_URichTextBlock();
UPackage* Z_Construct_UPackage__Script_CustomSubtitle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USubtitleRichTextBlock ***************************************************
void USubtitleRichTextBlock::StaticRegisterNativesUSubtitleRichTextBlock()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubtitleRichTextBlock;
UClass* USubtitleRichTextBlock::GetPrivateStaticClass()
{
	using TClass = USubtitleRichTextBlock;
	if (!Z_Registration_Info_UClass_USubtitleRichTextBlock.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubtitleRichTextBlock"),
			Z_Registration_Info_UClass_USubtitleRichTextBlock.InnerSingleton,
			StaticRegisterNativesUSubtitleRichTextBlock,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USubtitleRichTextBlock.InnerSingleton;
}
UClass* Z_Construct_UClass_USubtitleRichTextBlock_NoRegister()
{
	return USubtitleRichTextBlock::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubtitleRichTextBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SubtitleRichTextBlock.h" },
		{ "ModuleRelativePath", "Public/SubtitleRichTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubtitleReceived_MetaData[] = {
		{ "Category", "SubtitleHook" },
		{ "ModuleRelativePath", "Public/SubtitleRichTextBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubtitleReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubtitleRichTextBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USubtitleRichTextBlock_Statics::NewProp_OnSubtitleReceived = { "OnSubtitleReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubtitleRichTextBlock, OnSubtitleReceived), Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubtitleReceived_MetaData), NewProp_OnSubtitleReceived_MetaData) }; // 299292747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubtitleRichTextBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleRichTextBlock_Statics::NewProp_OnSubtitleReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleRichTextBlock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubtitleRichTextBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSubtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleRichTextBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USubtitleRichTextBlock_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USubtitleInterface_NoRegister, (int32)VTABLE_OFFSET(USubtitleRichTextBlock, ISubtitleInterface), false },  // 4171893457
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubtitleRichTextBlock_Statics::ClassParams = {
	&USubtitleRichTextBlock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubtitleRichTextBlock_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleRichTextBlock_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleRichTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_USubtitleRichTextBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubtitleRichTextBlock()
{
	if (!Z_Registration_Info_UClass_USubtitleRichTextBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubtitleRichTextBlock.OuterSingleton, Z_Construct_UClass_USubtitleRichTextBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubtitleRichTextBlock.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitleRichTextBlock);
USubtitleRichTextBlock::~USubtitleRichTextBlock() {}
// ********** End Class USubtitleRichTextBlock *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleRichTextBlock_h__Script_CustomSubtitle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubtitleRichTextBlock, USubtitleRichTextBlock::StaticClass, TEXT("USubtitleRichTextBlock"), &Z_Registration_Info_UClass_USubtitleRichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubtitleRichTextBlock), 3836149453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleRichTextBlock_h__Script_CustomSubtitle_1182446715(TEXT("/Script/CustomSubtitle"),
	Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleRichTextBlock_h__Script_CustomSubtitle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleRichTextBlock_h__Script_CustomSubtitle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
