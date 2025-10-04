// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubtitleInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubtitleInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleInterface();
CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleInterface_NoRegister();
CUSTOMSUBTITLE_API UFunction* Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_CustomSubtitle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSubtitleReceivedSignature ********************************************
struct Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics
{
	struct _Script_CustomSubtitle_eventSubtitleReceivedSignature_Parms
	{
		FText SubtitleText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitleInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CustomSubtitle_eventSubtitleReceivedSignature_Parms, SubtitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::NewProp_SubtitleText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSubtitle, nullptr, "SubtitleReceivedSignature__DelegateSignature", Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::_Script_CustomSubtitle_eventSubtitleReceivedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::_Script_CustomSubtitle_eventSubtitleReceivedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSubtitle_SubtitleReceivedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSubtitleReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& SubtitleReceivedSignature, FText const& SubtitleText)
{
	struct _Script_CustomSubtitle_eventSubtitleReceivedSignature_Parms
	{
		FText SubtitleText;
	};
	_Script_CustomSubtitle_eventSubtitleReceivedSignature_Parms Parms;
	Parms.SubtitleText=SubtitleText;
	SubtitleReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSubtitleReceivedSignature **********************************************

// ********** Begin Interface USubtitleInterface Function GetAutoUpdateText ************************
struct Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics
{
	struct SubtitleInterface_eventGetAutoUpdateText_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SubtitleHook" },
		{ "ModuleRelativePath", "Public/SubtitleInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubtitleInterface_eventGetAutoUpdateText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubtitleInterface_eventGetAutoUpdateText_Parms), &Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubtitleInterface, nullptr, "GetAutoUpdateText", Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::SubtitleInterface_eventGetAutoUpdateText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::SubtitleInterface_eventGetAutoUpdateText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISubtitleInterface::execGetAutoUpdateText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAutoUpdateText();
	P_NATIVE_END;
}
// ********** End Interface USubtitleInterface Function GetAutoUpdateText **************************

// ********** Begin Interface USubtitleInterface Function SetAutoUpdateText ************************
struct Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics
{
	struct SubtitleInterface_eventSetAutoUpdateText_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SubtitleHook" },
		{ "ModuleRelativePath", "Public/SubtitleInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((SubtitleInterface_eventSetAutoUpdateText_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubtitleInterface_eventSetAutoUpdateText_Parms), &Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubtitleInterface, nullptr, "SetAutoUpdateText", Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::SubtitleInterface_eventSetAutoUpdateText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::SubtitleInterface_eventSetAutoUpdateText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISubtitleInterface::execSetAutoUpdateText)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoUpdateText(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Interface USubtitleInterface Function SetAutoUpdateText **************************

// ********** Begin Interface USubtitleInterface Function UpdateSubtitleText ***********************
struct Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics
{
	struct SubtitleInterface_eventUpdateSubtitleText_Parms
	{
		FText SubtitleText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SubtitleHook" },
		{ "ModuleRelativePath", "Public/SubtitleInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubtitleInterface_eventUpdateSubtitleText_Parms, SubtitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::NewProp_SubtitleText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubtitleInterface, nullptr, "UpdateSubtitleText", Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::SubtitleInterface_eventUpdateSubtitleText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::SubtitleInterface_eventUpdateSubtitleText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISubtitleInterface::execUpdateSubtitleText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SubtitleText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSubtitleText(Z_Param_Out_SubtitleText);
	P_NATIVE_END;
}
// ********** End Interface USubtitleInterface Function UpdateSubtitleText *************************

// ********** Begin Interface USubtitleInterface ***************************************************
void USubtitleInterface::StaticRegisterNativesUSubtitleInterface()
{
	UClass* Class = USubtitleInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAutoUpdateText", &ISubtitleInterface::execGetAutoUpdateText },
		{ "SetAutoUpdateText", &ISubtitleInterface::execSetAutoUpdateText },
		{ "UpdateSubtitleText", &ISubtitleInterface::execUpdateSubtitleText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubtitleInterface;
UClass* USubtitleInterface::GetPrivateStaticClass()
{
	using TClass = USubtitleInterface;
	if (!Z_Registration_Info_UClass_USubtitleInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubtitleInterface"),
			Z_Registration_Info_UClass_USubtitleInterface.InnerSingleton,
			StaticRegisterNativesUSubtitleInterface,
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
	return Z_Registration_Info_UClass_USubtitleInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_USubtitleInterface_NoRegister()
{
	return USubtitleInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubtitleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SubtitleInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubtitleInterface_GetAutoUpdateText, "GetAutoUpdateText" }, // 2929646236
		{ &Z_Construct_UFunction_USubtitleInterface_SetAutoUpdateText, "SetAutoUpdateText" }, // 452235777
		{ &Z_Construct_UFunction_USubtitleInterface_UpdateSubtitleText, "UpdateSubtitleText" }, // 3209850334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubtitleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubtitleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSubtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubtitleInterface_Statics::ClassParams = {
	&USubtitleInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USubtitleInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubtitleInterface()
{
	if (!Z_Registration_Info_UClass_USubtitleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubtitleInterface.OuterSingleton, Z_Construct_UClass_USubtitleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubtitleInterface.OuterSingleton;
}
USubtitleInterface::USubtitleInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitleInterface);
// ********** End Interface USubtitleInterface *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h__Script_CustomSubtitle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubtitleInterface, USubtitleInterface::StaticClass, TEXT("USubtitleInterface"), &Z_Registration_Info_UClass_USubtitleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubtitleInterface), 4171893457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h__Script_CustomSubtitle_2341083723(TEXT("/Script/CustomSubtitle"),
	Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h__Script_CustomSubtitle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h__Script_CustomSubtitle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
