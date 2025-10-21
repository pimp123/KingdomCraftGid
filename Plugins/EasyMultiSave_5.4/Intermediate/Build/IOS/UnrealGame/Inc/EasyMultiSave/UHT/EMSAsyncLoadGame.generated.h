// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/Public/EMSAsyncLoadGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEMSAsyncLoadGame;
class UEMSObject;
class UObject;
#ifdef EASYMULTISAVE_EMSAsyncLoadGame_generated_h
#error "EMSAsyncLoadGame.generated.h already included, missing '#pragma once' in EMSAsyncLoadGame.h"
#endif
#define EASYMULTISAVE_EMSAsyncLoadGame_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_14_DELEGATE \
EASYMULTISAVE_API void FAsyncLoadOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadOutputPin);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_15_DELEGATE \
EASYMULTISAVE_API void FAsyncLoadFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadFailedPin);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoLoadLevelActors); \
	DECLARE_FUNCTION(execAsyncLoadActors);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSAsyncLoadGame(); \
	friend struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics; \
public: \
	DECLARE_CLASS(UEMSAsyncLoadGame, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSAsyncLoadGame)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEMSAsyncLoadGame(UEMSAsyncLoadGame&&); \
	UEMSAsyncLoadGame(const UEMSAsyncLoadGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSAsyncLoadGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSAsyncLoadGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSAsyncLoadGame) \
	NO_API virtual ~UEMSAsyncLoadGame();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_17_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSAsyncLoadGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
