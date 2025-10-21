// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Data/Public/EMSVersion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSVersion() {}

// Begin Cross Module References
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveVersionInfo();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin ScriptStruct FSaveVersionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveVersionInfo;
class UScriptStruct* FSaveVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveVersionInfo, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("SaveVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SaveVersionInfo.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FSaveVersionInfo>()
{
	return FSaveVersionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveVersionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSVersion.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveVersionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"SaveVersionInfo",
	nullptr,
	0,
	sizeof(FSaveVersionInfo),
	alignof(FSaveVersionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveVersionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SaveVersionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveVersionInfo.InnerSingleton;
}
// End ScriptStruct FSaveVersionInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSVersion_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FSaveVersionInfo_Statics::NewStructOps, TEXT("SaveVersionInfo"), &Z_Registration_Info_UScriptStruct_SaveVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveVersionInfo), 2222675948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSVersion_h_19587535(TEXT("/Script/EasyMultiSave"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSVersion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSVersion_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
