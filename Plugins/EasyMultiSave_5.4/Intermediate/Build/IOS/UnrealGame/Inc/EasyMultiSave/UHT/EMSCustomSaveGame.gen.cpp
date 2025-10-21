// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Common/Public/EMSCustomSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSCustomSaveGame() {}

// Begin Cross Module References
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Class UEMSCustomSaveGame
void UEMSCustomSaveGame::StaticRegisterNativesUEMSCustomSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSCustomSaveGame);
UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister()
{
	return UEMSCustomSaveGame::StaticClass();
}
struct Z_Construct_UClass_UEMSCustomSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Public/EMSCustomSaveGame.h" },
		{ "ModuleRelativePath", "Common/Public/EMSCustomSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "Category", "Files" },
		{ "Comment", "/** The actual name of the custom save file. If empty it will use the class name. */" },
		{ "DisplayName", "File Name" },
		{ "ModuleRelativePath", "Common/Public/EMSCustomSaveGame.h" },
		{ "ToolTip", "The actual name of the custom save file. If empty it will use the class name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSaveSlot_MetaData[] = {
		{ "Category", "Files" },
		{ "Comment", "/** If you want to use the current save slot for the custom save file. */" },
		{ "ModuleRelativePath", "Common/Public/EMSCustomSaveGame.h" },
		{ "ToolTip", "If you want to use the current save slot for the custom save file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static void NewProp_bUseSaveSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSaveSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSCustomSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSCustomSaveGame, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
void Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_SetBit(void* Obj)
{
	((UEMSCustomSaveGame*)Obj)->bUseSaveSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot = { "bUseSaveSlot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSCustomSaveGame), &Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSaveSlot_MetaData), NewProp_bUseSaveSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEMSCustomSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSCustomSaveGame_Statics::ClassParams = {
	&UEMSCustomSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSCustomSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEMSCustomSaveGame()
{
	if (!Z_Registration_Info_UClass_UEMSCustomSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSCustomSaveGame.OuterSingleton, Z_Construct_UClass_UEMSCustomSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSCustomSaveGame.OuterSingleton;
}
template<> EASYMULTISAVE_API UClass* StaticClass<UEMSCustomSaveGame>()
{
	return UEMSCustomSaveGame::StaticClass();
}
UEMSCustomSaveGame::UEMSCustomSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSCustomSaveGame);
UEMSCustomSaveGame::~UEMSCustomSaveGame() {}
// End Class UEMSCustomSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSCustomSaveGame, UEMSCustomSaveGame::StaticClass, TEXT("UEMSCustomSaveGame"), &Z_Registration_Info_UClass_UEMSCustomSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSCustomSaveGame), 2302483716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_4063542813(TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
