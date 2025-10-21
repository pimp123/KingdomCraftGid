// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/Public/EMSAsyncCheck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEMSAsyncCheck;
class UObject;
enum class ESaveFileCheckType : uint8;
#ifdef EASYMULTISAVE_EMSAsyncCheck_generated_h
#error "EMSAsyncCheck.generated.h already included, missing '#pragma once' in EMSAsyncCheck.h"
#endif
#define EASYMULTISAVE_EMSAsyncCheck_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_12_DELEGATE \
EASYMULTISAVE_API void FCheckCompletedPin_DelegateWrapper(const FMulticastScriptDelegate& CheckCompletedPin);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_13_DELEGATE \
EASYMULTISAVE_API void FCheckFailedPin_DelegateWrapper(const FMulticastScriptDelegate& CheckFailedPin);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckSaveFiles);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSAsyncCheck(); \
	friend struct Z_Construct_UClass_UEMSAsyncCheck_Statics; \
public: \
	DECLARE_CLASS(UEMSAsyncCheck, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSAsyncCheck)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEMSAsyncCheck(UEMSAsyncCheck&&); \
	UEMSAsyncCheck(const UEMSAsyncCheck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSAsyncCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSAsyncCheck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSAsyncCheck) \
	NO_API virtual ~UEMSAsyncCheck();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_15_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSAsyncCheck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
