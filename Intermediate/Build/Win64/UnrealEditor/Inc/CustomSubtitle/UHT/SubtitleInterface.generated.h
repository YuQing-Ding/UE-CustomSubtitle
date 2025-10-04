// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitleInterface.h"

#ifdef CUSTOMSUBTITLE_SubtitleInterface_generated_h
#error "SubtitleInterface.generated.h already included, missing '#pragma once' in SubtitleInterface.h"
#endif
#define CUSTOMSUBTITLE_SubtitleInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FSubtitleReceivedSignature ********************************************
#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_9_DELEGATE \
CUSTOMSUBTITLE_API void FSubtitleReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& SubtitleReceivedSignature, FText const& SubtitleText);


// ********** End Delegate FSubtitleReceivedSignature **********************************************

// ********** Begin Interface USubtitleInterface ***************************************************
#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAutoUpdateText); \
	DECLARE_FUNCTION(execSetAutoUpdateText); \
	DECLARE_FUNCTION(execUpdateSubtitleText);


CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleInterface_NoRegister();

#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMSUBTITLE_API USubtitleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitleInterface(USubtitleInterface&&) = delete; \
	USubtitleInterface(const USubtitleInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMSUBTITLE_API, USubtitleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitleInterface) \
	virtual ~USubtitleInterface() = default;


#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubtitleInterface(); \
	friend struct Z_Construct_UClass_USubtitleInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMSUBTITLE_API UClass* Z_Construct_UClass_USubtitleInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CustomSubtitle"), Z_Construct_UClass_USubtitleInterface_NoRegister) \
	DECLARE_SERIALIZER(USubtitleInterface)


#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubtitleInterface() {} \
public: \
	typedef USubtitleInterface UClassType; \
	typedef ISubtitleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_12_PROLOG
#define FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitleInterface;

// ********** End Interface USubtitleInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_YuQing_Documents_Unreal_Projects_Project_DroneSimDemo_Plugins_CustomSubtitle_Source_CustomSubtitle_Public_SubtitleInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
