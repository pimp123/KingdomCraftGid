// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/System/Public/EMSObjectBase.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSObjectBase() {}

// Begin Cross Module References
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectBase();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Class UEMSObjectBase
void UEMSObjectBase::StaticRegisterNativesUEMSObjectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSObjectBase);
UClass* Z_Construct_UClass_UEMSObjectBase_NoRegister()
{
	return UEMSObjectBase::StaticClass();
}
struct Z_Construct_UClass_UEMSObjectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/Public/EMSObjectBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "System/Public/EMSObjectBase.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveGameName_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveUserName_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSaveSlots_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCustomSaves_MetaData[] = {
		{ "ModuleRelativePath", "System/Public/EMSObjectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSaveGameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSaveUserName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSaveSlots_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedSaveSlots_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedSaveSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCustomSaves_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedCustomSaves_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedCustomSaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSObjectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CurrentSaveGameName = { "CurrentSaveGameName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObjectBase, CurrentSaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveGameName_MetaData), NewProp_CurrentSaveGameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CurrentSaveUserName = { "CurrentSaveUserName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObjectBase, CurrentSaveUserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveUserName_MetaData), NewProp_CurrentSaveUserName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedSaveSlots_ValueProp = { "CachedSaveSlots", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedSaveSlots_Key_KeyProp = { "CachedSaveSlots_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedSaveSlots = { "CachedSaveSlots", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObjectBase, CachedSaveSlots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSaveSlots_MetaData), NewProp_CachedSaveSlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedCustomSaves_ValueProp = { "CachedCustomSaves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedCustomSaves_Key_KeyProp = { "CachedCustomSaves_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedCustomSaves = { "CachedCustomSaves", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSObjectBase, CachedCustomSaves), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCustomSaves_MetaData), NewProp_CachedCustomSaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSObjectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CurrentSaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CurrentSaveUserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedSaveSlots_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedSaveSlots_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedSaveSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedCustomSaves_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedCustomSaves_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObjectBase_Statics::NewProp_CachedCustomSaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObjectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEMSObjectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObjectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSObjectBase_Statics::ClassParams = {
	&UEMSObjectBase::StaticClass,
	"EmsUser",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEMSObjectBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObjectBase_Statics::PropPointers),
	0,
	0x401000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObjectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSObjectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEMSObjectBase()
{
	if (!Z_Registration_Info_UClass_UEMSObjectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSObjectBase.OuterSingleton, Z_Construct_UClass_UEMSObjectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSObjectBase.OuterSingleton;
}
template<> EASYMULTISAVE_API UClass* StaticClass<UEMSObjectBase>()
{
	return UEMSObjectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSObjectBase);
UEMSObjectBase::~UEMSObjectBase() {}
// End Class UEMSObjectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSObjectBase, UEMSObjectBase::StaticClass, TEXT("UEMSObjectBase"), &Z_Registration_Info_UClass_UEMSObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSObjectBase), 2039438705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_2423510670(TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
