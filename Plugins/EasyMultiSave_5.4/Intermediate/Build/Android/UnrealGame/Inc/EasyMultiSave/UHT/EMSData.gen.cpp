// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Data/Public/EMSData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStackArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPositionArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin ScriptStruct FSaveSlotInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveSlotInfo;
class UScriptStruct* FSaveSlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveSlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveSlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveSlotInfo, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("SaveSlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SaveSlotInfo.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FSaveSlotInfo>()
{
	return FSaveSlotInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nSave Slots\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Save Slots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//The name of the save slot, used to identify the save file.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "The name of the save slot, used to identify the save file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//The timestamp of when the save slot was last updated.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "The timestamp of when the save slot was last updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//The name of the current level associated with this save slot.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "The name of the current level associated with this save slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//List of persistent level names in this save slot. Only valid with Multi-Level saving.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "List of persistent level names in this save slot. Only valid with Multi-Level saving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//List of player names associated with this save slot.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "List of player names associated with this save slot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Level;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Levels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveSlotInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Levels_MetaData), NewProp_Levels_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"SaveSlotInfo",
	Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers),
	sizeof(FSaveSlotInfo),
	alignof(FSaveSlotInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SaveSlotInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveSlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveSlotInfo.InnerSingleton;
}
// End ScriptStruct FSaveSlotInfo

// Begin ScriptStruct FRawObjectSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawObjectSaveData;
class UScriptStruct* FRawObjectSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawObjectSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawObjectSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawObjectSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("RawObjectSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_RawObjectSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FRawObjectSaveData>()
{
	return FRawObjectSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRawObjectSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nGeneric Save Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Generic Save Archives" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "RawData" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "RawData" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawObjectSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawObjectSaveData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawObjectSaveData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"RawObjectSaveData",
	Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers),
	sizeof(FRawObjectSaveData),
	alignof(FRawObjectSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_RawObjectSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawObjectSaveData.InnerSingleton, Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RawObjectSaveData.InnerSingleton;
}
// End ScriptStruct FRawObjectSaveData

// Begin ScriptStruct FComponentSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSaveData;
class UScriptStruct* FComponentSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ComponentSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FComponentSaveData>()
{
	return FComponentSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ComponentSaveData",
	nullptr,
	0,
	sizeof(FComponentSaveData),
	alignof(FComponentSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSaveData.InnerSingleton, Z_Construct_UScriptStruct_FComponentSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentSaveData.InnerSingleton;
}
// End ScriptStruct FComponentSaveData

// Begin ScriptStruct FGameObjectSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameObjectSaveData;
class UScriptStruct* FGameObjectSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameObjectSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameObjectSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameObjectSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("GameObjectSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_GameObjectSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FGameObjectSaveData>()
{
	return FGameObjectSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameObjectSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"GameObjectSaveData",
	nullptr,
	0,
	sizeof(FGameObjectSaveData),
	alignof(FGameObjectSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_GameObjectSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameObjectSaveData.InnerSingleton, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameObjectSaveData.InnerSingleton;
}
// End ScriptStruct FGameObjectSaveData

// Begin ScriptStruct FActorSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSaveData;
class UScriptStruct* FActorSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ActorSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FActorSaveData>()
{
	return FActorSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ActorSaveData",
	nullptr,
	0,
	sizeof(FActorSaveData),
	alignof(FActorSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton, Z_Construct_UScriptStruct_FActorSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton;
}
// End ScriptStruct FActorSaveData

// Begin ScriptStruct FLevelScriptSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelScriptSaveData;
class UScriptStruct* FLevelScriptSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelScriptSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelScriptSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelScriptSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelScriptSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelScriptSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelScriptSaveData>()
{
	return FLevelScriptSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nLevel Save Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Level Save Archives" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelScriptSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LevelScriptSaveData",
	nullptr,
	0,
	sizeof(FLevelScriptSaveData),
	alignof(FLevelScriptSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_LevelScriptSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelScriptSaveData.InnerSingleton, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelScriptSaveData.InnerSingleton;
}
// End ScriptStruct FLevelScriptSaveData

// Begin ScriptStruct FLevelArchive
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelArchive;
class UScriptStruct* FLevelArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelArchive"));
	}
	return Z_Registration_Info_UScriptStruct_LevelArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelArchive>()
{
	return FLevelArchive::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelArchive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LevelArchive",
	nullptr,
	0,
	sizeof(FLevelArchive),
	alignof(FLevelArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive()
{
	if (!Z_Registration_Info_UScriptStruct_LevelArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelArchive.InnerSingleton, Z_Construct_UScriptStruct_FLevelArchive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelArchive.InnerSingleton;
}
// End ScriptStruct FLevelArchive

// Begin ScriptStruct FLevelStackArchive
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelStackArchive;
class UScriptStruct* FLevelStackArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelStackArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelStackArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStackArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelStackArchive"));
	}
	return Z_Registration_Info_UScriptStruct_LevelStackArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelStackArchive>()
{
	return FLevelStackArchive::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelStackArchive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStackArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStackArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LevelStackArchive",
	nullptr,
	0,
	sizeof(FLevelStackArchive),
	alignof(FLevelStackArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelStackArchive()
{
	if (!Z_Registration_Info_UScriptStruct_LevelStackArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelStackArchive.InnerSingleton, Z_Construct_UScriptStruct_FLevelStackArchive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelStackArchive.InnerSingleton;
}
// End ScriptStruct FLevelStackArchive

// Begin ScriptStruct FMultiLevelStreamingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiLevelStreamingData;
class UScriptStruct* FMultiLevelStreamingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiLevelStreamingData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("MultiLevelStreamingData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FMultiLevelStreamingData>()
{
	return FMultiLevelStreamingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiLevelStreamingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"MultiLevelStreamingData",
	nullptr,
	0,
	sizeof(FMultiLevelStreamingData),
	alignof(FMultiLevelStreamingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData()
{
	if (!Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.InnerSingleton, Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MultiLevelStreamingData.InnerSingleton;
}
// End ScriptStruct FMultiLevelStreamingData

// Begin ScriptStruct FPawnSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnSaveData;
class UScriptStruct* FPawnSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PawnSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_PawnSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPawnSaveData>()
{
	return FPawnSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPawnSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nPlayer Save Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Player Save Archives" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PawnSaveData",
	nullptr,
	0,
	sizeof(FPawnSaveData),
	alignof(FPawnSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_PawnSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnSaveData.InnerSingleton, Z_Construct_UScriptStruct_FPawnSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PawnSaveData.InnerSingleton;
}
// End ScriptStruct FPawnSaveData

// Begin ScriptStruct FControllerSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControllerSaveData;
class UScriptStruct* FControllerSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControllerSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControllerSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ControllerSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ControllerSaveData.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FControllerSaveData>()
{
	return FControllerSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControllerSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ControllerSaveData",
	nullptr,
	0,
	sizeof(FControllerSaveData),
	alignof(FControllerSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_ControllerSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControllerSaveData.InnerSingleton, Z_Construct_UScriptStruct_FControllerSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControllerSaveData.InnerSingleton;
}
// End ScriptStruct FControllerSaveData

// Begin ScriptStruct FPlayerArchive
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerArchive;
class UScriptStruct* FPlayerArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerArchive"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerArchive>()
{
	return FPlayerArchive::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerArchive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PlayerArchive",
	nullptr,
	0,
	sizeof(FPlayerArchive),
	alignof(FPlayerArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerArchive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerArchive.InnerSingleton;
}
// End ScriptStruct FPlayerArchive

// Begin ScriptStruct FPlayerPositionArchive
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerPositionArchive;
class UScriptStruct* FPlayerPositionArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerPositionArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerPositionArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerPositionArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerPositionArchive"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerPositionArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerPositionArchive>()
{
	return FPlayerPositionArchive::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerPositionArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PlayerPositionArchive",
	nullptr,
	0,
	sizeof(FPlayerPositionArchive),
	alignof(FPlayerPositionArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerPositionArchive()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerPositionArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerPositionArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerPositionArchive.InnerSingleton;
}
// End ScriptStruct FPlayerPositionArchive

// Begin ScriptStruct FPlayerStackArchive
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStackArchive;
class UScriptStruct* FPlayerStackArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStackArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStackArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStackArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerStackArchive"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStackArchive.OuterSingleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerStackArchive>()
{
	return FPlayerStackArchive::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerStackArchive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStackArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PlayerStackArchive",
	nullptr,
	0,
	sizeof(FPlayerStackArchive),
	alignof(FPlayerStackArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStackArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStackArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerStackArchive.InnerSingleton;
}
// End ScriptStruct FPlayerStackArchive

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveSlotInfo::StaticStruct, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewStructOps, TEXT("SaveSlotInfo"), &Z_Registration_Info_UScriptStruct_SaveSlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveSlotInfo), 3260823791U) },
		{ FRawObjectSaveData::StaticStruct, Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewStructOps, TEXT("RawObjectSaveData"), &Z_Registration_Info_UScriptStruct_RawObjectSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawObjectSaveData), 31691426U) },
		{ FComponentSaveData::StaticStruct, Z_Construct_UScriptStruct_FComponentSaveData_Statics::NewStructOps, TEXT("ComponentSaveData"), &Z_Registration_Info_UScriptStruct_ComponentSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSaveData), 2876932326U) },
		{ FGameObjectSaveData::StaticStruct, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::NewStructOps, TEXT("GameObjectSaveData"), &Z_Registration_Info_UScriptStruct_GameObjectSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameObjectSaveData), 1136804942U) },
		{ FActorSaveData::StaticStruct, Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps, TEXT("ActorSaveData"), &Z_Registration_Info_UScriptStruct_ActorSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSaveData), 4195223069U) },
		{ FLevelScriptSaveData::StaticStruct, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::NewStructOps, TEXT("LevelScriptSaveData"), &Z_Registration_Info_UScriptStruct_LevelScriptSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelScriptSaveData), 3309369264U) },
		{ FLevelArchive::StaticStruct, Z_Construct_UScriptStruct_FLevelArchive_Statics::NewStructOps, TEXT("LevelArchive"), &Z_Registration_Info_UScriptStruct_LevelArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelArchive), 2749270828U) },
		{ FLevelStackArchive::StaticStruct, Z_Construct_UScriptStruct_FLevelStackArchive_Statics::NewStructOps, TEXT("LevelStackArchive"), &Z_Registration_Info_UScriptStruct_LevelStackArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelStackArchive), 2312088511U) },
		{ FMultiLevelStreamingData::StaticStruct, Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::NewStructOps, TEXT("MultiLevelStreamingData"), &Z_Registration_Info_UScriptStruct_MultiLevelStreamingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiLevelStreamingData), 1008679488U) },
		{ FPawnSaveData::StaticStruct, Z_Construct_UScriptStruct_FPawnSaveData_Statics::NewStructOps, TEXT("PawnSaveData"), &Z_Registration_Info_UScriptStruct_PawnSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnSaveData), 3353734103U) },
		{ FControllerSaveData::StaticStruct, Z_Construct_UScriptStruct_FControllerSaveData_Statics::NewStructOps, TEXT("ControllerSaveData"), &Z_Registration_Info_UScriptStruct_ControllerSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControllerSaveData), 388059212U) },
		{ FPlayerArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerArchive_Statics::NewStructOps, TEXT("PlayerArchive"), &Z_Registration_Info_UScriptStruct_PlayerArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerArchive), 2197684905U) },
		{ FPlayerPositionArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::NewStructOps, TEXT("PlayerPositionArchive"), &Z_Registration_Info_UScriptStruct_PlayerPositionArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerPositionArchive), 1825146994U) },
		{ FPlayerStackArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::NewStructOps, TEXT("PlayerStackArchive"), &Z_Registration_Info_UScriptStruct_PlayerStackArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStackArchive), 4197783960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h_168150025(TEXT("/Script/EasyMultiSave"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
