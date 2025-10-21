// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/Public/EMSObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
#ifdef EASYMULTISAVE_EMSObject_generated_h
#error "EMSObject.generated.h already included, missing '#pragma once' in EMSObject.h"
#endif
#define EASYMULTISAVE_EMSObject_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_18_DELEGATE \
EASYMULTISAVE_API void FEmsLoadPlayerComplete_DelegateWrapper(const FMulticastScriptDelegate& EmsLoadPlayerComplete, const APlayerController* LoadedPlayer);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_19_DELEGATE \
EASYMULTISAVE_API void FEmsLoadLevelComplete_DelegateWrapper(const FMulticastScriptDelegate& EmsLoadLevelComplete, TArray<TSoftObjectPtr<AActor> > const& LoadedActors);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSObject(); \
	friend struct Z_Construct_UClass_UEMSObject_Statics; \
public: \
	DECLARE_CLASS(UEMSObject, UEMSObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSObject)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEMSObject(UEMSObject&&); \
	UEMSObject(const UEMSObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSObject) \
	NO_API virtual ~UEMSObject();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_21_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
