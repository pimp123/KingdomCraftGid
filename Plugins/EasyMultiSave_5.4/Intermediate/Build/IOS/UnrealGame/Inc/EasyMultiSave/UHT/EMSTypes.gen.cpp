// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Data/Public/EMSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSTypes() {}

// Begin Cross Module References
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileValidity();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ENextStepType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EPrepareType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveErrorType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveGameMode();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Enum EActorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorType;
static UEnum* EActorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EActorType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EActorType"));
	}
	return Z_Registration_Info_UEnum_EActorType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EActorType>()
{
	return EActorType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EActorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AT_Destroyed.Name", "EActorType::AT_Destroyed" },
		{ "AT_GameObject.Name", "EActorType::AT_GameObject" },
		{ "AT_LevelScript.Name", "EActorType::AT_LevelScript" },
		{ "AT_Persistent.Name", "EActorType::AT_Persistent" },
		{ "AT_Placed.Name", "EActorType::AT_Placed" },
		{ "AT_PlayerActor.Name", "EActorType::AT_PlayerActor" },
		{ "AT_PlayerPawn.Name", "EActorType::AT_PlayerPawn" },
		{ "AT_Runtime.Name", "EActorType::AT_Runtime" },
		{ "Comment", "/**\nEnums\n**///Serialized values, never change order or add entries in the middle.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "ToolTip", "Enums\n//Serialized values, never change order or add entries in the middle." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActorType::AT_Runtime", (int64)EActorType::AT_Runtime },
		{ "EActorType::AT_Placed", (int64)EActorType::AT_Placed },
		{ "EActorType::AT_LevelScript", (int64)EActorType::AT_LevelScript },
		{ "EActorType::AT_PlayerActor", (int64)EActorType::AT_PlayerActor },
		{ "EActorType::AT_PlayerPawn", (int64)EActorType::AT_PlayerPawn },
		{ "EActorType::AT_GameObject", (int64)EActorType::AT_GameObject },
		{ "EActorType::AT_Persistent", (int64)EActorType::AT_Persistent },
		{ "EActorType::AT_Destroyed", (int64)EActorType::AT_Destroyed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EActorType",
	"EActorType",
	Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType()
{
	if (!Z_Registration_Info_UEnum_EActorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EActorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActorType.InnerSingleton;
}
// End Enum EActorType

// Begin Enum EDataLoadType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLoadType;
static UEnum* EDataLoadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EDataLoadType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EDataLoadType"));
	}
	return Z_Registration_Info_UEnum_EDataLoadType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EDataLoadType>()
{
	return EDataLoadType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DATA_Level.Name", "EDataLoadType::DATA_Level" },
		{ "DATA_Object.Name", "EDataLoadType::DATA_Object" },
		{ "DATA_Player.Name", "EDataLoadType::DATA_Player" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataLoadType::DATA_Level", (int64)EDataLoadType::DATA_Level },
		{ "EDataLoadType::DATA_Player", (int64)EDataLoadType::DATA_Player },
		{ "EDataLoadType::DATA_Object", (int64)EDataLoadType::DATA_Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EDataLoadType",
	"EDataLoadType",
	Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType()
{
	if (!Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataLoadType.InnerSingleton;
}
// End Enum EDataLoadType

// Begin Enum ESaveGameMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveGameMode;
static UEnum* ESaveGameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveGameMode"));
	}
	return Z_Registration_Info_UEnum_ESaveGameMode.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveGameMode>()
{
	return ESaveGameMode_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MODE_All.Name", "ESaveGameMode::MODE_All" },
		{ "MODE_Level.Name", "ESaveGameMode::MODE_Level" },
		{ "MODE_Player.Name", "ESaveGameMode::MODE_Player" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveGameMode::MODE_Player", (int64)ESaveGameMode::MODE_Player },
		{ "ESaveGameMode::MODE_Level", (int64)ESaveGameMode::MODE_Level },
		{ "ESaveGameMode::MODE_All", (int64)ESaveGameMode::MODE_All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveGameMode",
	"ESaveGameMode",
	Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveGameMode()
{
	if (!Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveGameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveGameMode.InnerSingleton;
}
// End Enum ESaveGameMode

// Begin Enum EAsyncCheckType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAsyncCheckType;
static UEnum* EAsyncCheckType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EAsyncCheckType"));
	}
	return Z_Registration_Info_UEnum_EAsyncCheckType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EAsyncCheckType>()
{
	return EAsyncCheckType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CT_Both.DisplayName", "Both" },
		{ "CT_Both.Name", "EAsyncCheckType::CT_Both" },
		{ "CT_Load.DisplayName", "Load Only" },
		{ "CT_Load.Name", "EAsyncCheckType::CT_Load" },
		{ "CT_Save.DisplayName", "Save Only" },
		{ "CT_Save.Name", "EAsyncCheckType::CT_Save" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAsyncCheckType::CT_Both", (int64)EAsyncCheckType::CT_Both },
		{ "EAsyncCheckType::CT_Save", (int64)EAsyncCheckType::CT_Save },
		{ "EAsyncCheckType::CT_Load", (int64)EAsyncCheckType::CT_Load },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EAsyncCheckType",
	"EAsyncCheckType",
	Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType()
{
	if (!Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAsyncCheckType.InnerSingleton;
}
// End Enum EAsyncCheckType

// Begin Enum ESaveErrorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveErrorType;
static UEnum* ESaveErrorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveErrorType"));
	}
	return Z_Registration_Info_UEnum_ESaveErrorType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveErrorType>()
{
	return ESaveErrorType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ER_Level.DisplayName", "Level Actors" },
		{ "ER_Level.Name", "ESaveErrorType::ER_Level" },
		{ "ER_Object.DisplayName", "Object" },
		{ "ER_Object.Name", "ESaveErrorType::ER_Object" },
		{ "ER_Player.DisplayName", "Player Actors" },
		{ "ER_Player.Name", "ESaveErrorType::ER_Player" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveErrorType::ER_Player", (int64)ESaveErrorType::ER_Player },
		{ "ESaveErrorType::ER_Level", (int64)ESaveErrorType::ER_Level },
		{ "ESaveErrorType::ER_Object", (int64)ESaveErrorType::ER_Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveErrorType",
	"ESaveErrorType",
	Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveErrorType()
{
	if (!Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveErrorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveErrorType.InnerSingleton;
}
// End Enum ESaveErrorType

// Begin Enum EPrepareType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPrepareType;
static UEnum* EPrepareType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPrepareType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPrepareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EPrepareType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EPrepareType"));
	}
	return Z_Registration_Info_UEnum_EPrepareType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EPrepareType>()
{
	return EPrepareType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "PT_Default.Name", "EPrepareType::PT_Default" },
		{ "PT_FullReload.Name", "EPrepareType::PT_FullReload" },
		{ "PT_RuntimeOnly.Name", "EPrepareType::PT_RuntimeOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPrepareType::PT_Default", (int64)EPrepareType::PT_Default },
		{ "EPrepareType::PT_RuntimeOnly", (int64)EPrepareType::PT_RuntimeOnly },
		{ "EPrepareType::PT_FullReload", (int64)EPrepareType::PT_FullReload },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EPrepareType",
	"EPrepareType",
	Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EPrepareType()
{
	if (!Z_Registration_Info_UEnum_EPrepareType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPrepareType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EPrepareType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPrepareType.InnerSingleton;
}
// End Enum EPrepareType

// Begin Enum EFileValidity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileValidity;
static UEnum* EFileValidity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileValidity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileValidity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EFileValidity, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EFileValidity"));
	}
	return Z_Registration_Info_UEnum_EFileValidity.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EFileValidity>()
{
	return EFileValidity_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FILE_INVALID.Name", "EFileValidity::FILE_INVALID" },
		{ "FILE_MISSING.Name", "EFileValidity::FILE_MISSING" },
		{ "FILE_VALID.Name", "EFileValidity::FILE_VALID" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileValidity::FILE_VALID", (int64)EFileValidity::FILE_VALID },
		{ "EFileValidity::FILE_MISSING", (int64)EFileValidity::FILE_MISSING },
		{ "EFileValidity::FILE_INVALID", (int64)EFileValidity::FILE_INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EFileValidity",
	"EFileValidity",
	Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EFileValidity()
{
	if (!Z_Registration_Info_UEnum_EFileValidity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileValidity.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EFileValidity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileValidity.InnerSingleton;
}
// End Enum EFileValidity

// Begin Enum ENextStepType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENextStepType;
static UEnum* ENextStepType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENextStepType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENextStepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ENextStepType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ENextStepType"));
	}
	return Z_Registration_Info_UEnum_ENextStepType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ENextStepType>()
{
	return ENextStepType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FinishSave.Name", "ENextStepType::FinishSave" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "SaveLevel.Name", "ENextStepType::SaveLevel" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENextStepType::SaveLevel", (int64)ENextStepType::SaveLevel },
		{ "ENextStepType::FinishSave", (int64)ENextStepType::FinishSave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ENextStepType",
	"ENextStepType",
	Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ENextStepType()
{
	if (!Z_Registration_Info_UEnum_ENextStepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENextStepType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ENextStepType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENextStepType.InnerSingleton;
}
// End Enum ENextStepType

// Begin Enum ELoadMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadMethod;
static UEnum* ELoadMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadMethod"));
	}
	return Z_Registration_Info_UEnum_ELoadMethod.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadMethod>()
{
	return ELoadMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LM_Default.Comment", "/** Useful for small amounts of Actors. Blocks the game thread during load. */" },
		{ "LM_Default.DisplayName", "Default" },
		{ "LM_Default.Name", "ELoadMethod::LM_Default" },
		{ "LM_Default.ToolTip", "Useful for small amounts of Actors. Blocks the game thread during load." },
		{ "LM_Deferred.Comment", "/** Useful large amounts of runtime spawned Actors. */" },
		{ "LM_Deferred.DisplayName", "Deferred" },
		{ "LM_Deferred.Name", "ELoadMethod::LM_Deferred" },
		{ "LM_Deferred.ToolTip", "Useful large amounts of runtime spawned Actors." },
		{ "LM_Thread.Comment", "/** Useful for large amounts of placed Actors.\x09*/" },
		{ "LM_Thread.DisplayName", "Multi-Thread" },
		{ "LM_Thread.Name", "ELoadMethod::LM_Thread" },
		{ "LM_Thread.ToolTip", "Useful for large amounts of placed Actors." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadMethod::LM_Default", (int64)ELoadMethod::LM_Default },
		{ "ELoadMethod::LM_Deferred", (int64)ELoadMethod::LM_Deferred },
		{ "ELoadMethod::LM_Thread", (int64)ELoadMethod::LM_Thread },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ELoadMethod",
	"ELoadMethod",
	Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod()
{
	if (!Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadMethod.InnerSingleton;
}
// End Enum ELoadMethod

// Begin Enum EFileSaveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileSaveMethod;
static UEnum* EFileSaveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EFileSaveMethod"));
	}
	return Z_Registration_Info_UEnum_EFileSaveMethod.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EFileSaveMethod>()
{
	return EFileSaveMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FM_Console.Comment", "/** No folders. No Compression. Each slot has it's own files with '_SlotName' suffix. */" },
		{ "FM_Console.DisplayName", "Console" },
		{ "FM_Console.Name", "EFileSaveMethod::FM_Console" },
		{ "FM_Console.ToolTip", "No folders. No Compression. Each slot has it's own files with '_SlotName' suffix." },
		{ "FM_Desktop.Comment", "/** Each slot has it's own folder. */" },
		{ "FM_Desktop.DisplayName", "Desktop" },
		{ "FM_Desktop.Name", "EFileSaveMethod::FM_Desktop" },
		{ "FM_Desktop.ToolTip", "Each slot has it's own folder." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileSaveMethod::FM_Desktop", (int64)EFileSaveMethod::FM_Desktop },
		{ "EFileSaveMethod::FM_Console", (int64)EFileSaveMethod::FM_Console },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EFileSaveMethod",
	"EFileSaveMethod",
	Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod()
{
	if (!Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileSaveMethod.InnerSingleton;
}
// End Enum EFileSaveMethod

// Begin Enum ESaveTypeFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveTypeFlags;
static UEnum* ESaveTypeFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveTypeFlags"));
	}
	return Z_Registration_Info_UEnum_ESaveTypeFlags.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveTypeFlags>()
{
	return ESaveTypeFlags_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "SF_Level.Comment", "/** Save Level Actors and Level Blueprints. */" },
		{ "SF_Level.DisplayName", "Level Actors" },
		{ "SF_Level.Name", "ESaveTypeFlags::SF_Level" },
		{ "SF_Level.ToolTip", "Save Level Actors and Level Blueprints." },
		{ "SF_Player.Comment", "/** Save Player Controller, Pawn and Player State. */" },
		{ "SF_Player.DisplayName", "Player Actors" },
		{ "SF_Player.Name", "ESaveTypeFlags::SF_Player" },
		{ "SF_Player.ToolTip", "Save Player Controller, Pawn and Player State." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveTypeFlags::SF_Player", (int64)ESaveTypeFlags::SF_Player },
		{ "ESaveTypeFlags::SF_Level", (int64)ESaveTypeFlags::SF_Level },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveTypeFlags",
	"ESaveTypeFlags",
	Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags()
{
	if (!Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveTypeFlags.InnerSingleton;
}
// End Enum ESaveTypeFlags

// Begin Enum ELoadTypeFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadTypeFlags;
static UEnum* ELoadTypeFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadTypeFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadTypeFlags"));
	}
	return Z_Registration_Info_UEnum_ELoadTypeFlags.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadTypeFlags>()
{
	return ELoadTypeFlags_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "LF_Level.Comment", "/** Load Level Actors and Level Blueprints. */" },
		{ "LF_Level.DisplayName", "Level Actors" },
		{ "LF_Level.Name", "ELoadTypeFlags::LF_Level" },
		{ "LF_Level.ToolTip", "Load Level Actors and Level Blueprints." },
		{ "LF_Player.Comment", "/** Load Player Controller, Pawn and Player State. */" },
		{ "LF_Player.DisplayName", "Player Actors" },
		{ "LF_Player.Name", "ELoadTypeFlags::LF_Player" },
		{ "LF_Player.ToolTip", "Load Player Controller, Pawn and Player State." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadTypeFlags::LF_Player", (int64)ELoadTypeFlags::LF_Player },
		{ "ELoadTypeFlags::LF_Level", (int64)ELoadTypeFlags::LF_Level },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ELoadTypeFlags",
	"ELoadTypeFlags",
	Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags()
{
	if (!Z_Registration_Info_UEnum_ELoadTypeFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadTypeFlags.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadTypeFlags.InnerSingleton;
}
// End Enum ELoadTypeFlags

// Begin Enum EMultiLevelSaveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiLevelSaveMethod;
static UEnum* EMultiLevelSaveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EMultiLevelSaveMethod"));
	}
	return Z_Registration_Info_UEnum_EMultiLevelSaveMethod.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EMultiLevelSaveMethod>()
{
	return EMultiLevelSaveMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ML_Disabled.Comment", "/** Multi Level Saving Disabled. */" },
		{ "ML_Disabled.DisplayName", "Disabled" },
		{ "ML_Disabled.Name", "EMultiLevelSaveMethod::ML_Disabled" },
		{ "ML_Disabled.ToolTip", "Multi Level Saving Disabled." },
		{ "ML_Full.Comment", "/** For multiple Persistent Levels with World Partition and/or Streaming Sub-Levels. */" },
		{ "ML_Full.DisplayName", "Full" },
		{ "ML_Full.Name", "EMultiLevelSaveMethod::ML_Full" },
		{ "ML_Full.ToolTip", "For multiple Persistent Levels with World Partition and/or Streaming Sub-Levels." },
		{ "ML_Normal.Comment", "/** For multiple Persistent Levels only. */" },
		{ "ML_Normal.DisplayName", "Basic" },
		{ "ML_Normal.Name", "EMultiLevelSaveMethod::ML_Normal" },
		{ "ML_Normal.ToolTip", "For multiple Persistent Levels only." },
		{ "ML_Stream.Comment", "/** For one Persistent Level with World Partition or Streaming Sub-Levels. */" },
		{ "ML_Stream.DisplayName", "Streaming" },
		{ "ML_Stream.Name", "EMultiLevelSaveMethod::ML_Stream" },
		{ "ML_Stream.ToolTip", "For one Persistent Level with World Partition or Streaming Sub-Levels." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMultiLevelSaveMethod::ML_Disabled", (int64)EMultiLevelSaveMethod::ML_Disabled },
		{ "EMultiLevelSaveMethod::ML_Normal", (int64)EMultiLevelSaveMethod::ML_Normal },
		{ "EMultiLevelSaveMethod::ML_Stream", (int64)EMultiLevelSaveMethod::ML_Stream },
		{ "EMultiLevelSaveMethod::ML_Full", (int64)EMultiLevelSaveMethod::ML_Full },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EMultiLevelSaveMethod",
	"EMultiLevelSaveMethod",
	Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod()
{
	if (!Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMultiLevelSaveMethod.InnerSingleton;
}
// End Enum EMultiLevelSaveMethod

// Begin Enum EThumbnailImageFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThumbnailImageFormat;
static UEnum* EThumbnailImageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EThumbnailImageFormat"));
	}
	return Z_Registration_Info_UEnum_EThumbnailImageFormat.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EThumbnailImageFormat>()
{
	return EThumbnailImageFormat_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Jpeg.Comment", "/** Use lower quality, but fast jpeg compression. */" },
		{ "Jpeg.Name", "EThumbnailImageFormat::Jpeg" },
		{ "Jpeg.ToolTip", "Use lower quality, but fast jpeg compression." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "Png.Comment", "/** Use high quality, but slow png compression. */" },
		{ "Png.Name", "EThumbnailImageFormat::Png" },
		{ "Png.ToolTip", "Use high quality, but slow png compression." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EThumbnailImageFormat::Png", (int64)EThumbnailImageFormat::Png },
		{ "EThumbnailImageFormat::Jpeg", (int64)EThumbnailImageFormat::Jpeg },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EThumbnailImageFormat",
	"EThumbnailImageFormat",
	Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat()
{
	if (!Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EThumbnailImageFormat.InnerSingleton;
}
// End Enum EThumbnailImageFormat

// Begin Enum ESaveFileCheckType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveFileCheckType;
static UEnum* ESaveFileCheckType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveFileCheckType"));
	}
	return Z_Registration_Info_UEnum_ESaveFileCheckType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveFileCheckType>()
{
	return ESaveFileCheckType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CheckForCustom.Comment", "/** Check Custom Save File without considering Slots.*/" },
		{ "CheckForCustom.DisplayName", "Custom Save" },
		{ "CheckForCustom.Name", "ESaveFileCheckType::CheckForCustom" },
		{ "CheckForCustom.ToolTip", "Check Custom Save File without considering Slots." },
		{ "CheckForCustomSlot.Comment", "/** Check Custom Save File or Custom Player within the Current Save Slot.*/" },
		{ "CheckForCustomSlot.DisplayName", "Custom Save in Slot" },
		{ "CheckForCustomSlot.Name", "ESaveFileCheckType::CheckForCustomSlot" },
		{ "CheckForCustomSlot.ToolTip", "Check Custom Save File or Custom Player within the Current Save Slot." },
		{ "CheckForGame.Comment", "/** Check Current Slot, Player and Level Files.*/" },
		{ "CheckForGame.DisplayName", "Default" },
		{ "CheckForGame.Name", "ESaveFileCheckType::CheckForGame" },
		{ "CheckForGame.ToolTip", "Check Current Slot, Player and Level Files." },
		{ "CheckForSlotOnly.Comment", "/** Will Check only for the Slot Info of the Current Save Slot.*/" },
		{ "CheckForSlotOnly.DisplayName", "Slot Only" },
		{ "CheckForSlotOnly.Name", "ESaveFileCheckType::CheckForSlotOnly" },
		{ "CheckForSlotOnly.ToolTip", "Will Check only for the Slot Info of the Current Save Slot." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveFileCheckType::CheckForGame", (int64)ESaveFileCheckType::CheckForGame },
		{ "ESaveFileCheckType::CheckForCustom", (int64)ESaveFileCheckType::CheckForCustom },
		{ "ESaveFileCheckType::CheckForCustomSlot", (int64)ESaveFileCheckType::CheckForCustomSlot },
		{ "ESaveFileCheckType::CheckForSlotOnly", (int64)ESaveFileCheckType::CheckForSlotOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ESaveFileCheckType",
	"ESaveFileCheckType",
	Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType()
{
	if (!Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveFileCheckType.InnerSingleton;
}
// End Enum ESaveFileCheckType

// Begin Enum EOldPackageEngine
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOldPackageEngine;
static UEnum* EOldPackageEngine_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EOldPackageEngine"));
	}
	return Z_Registration_Info_UEnum_EOldPackageEngine.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EOldPackageEngine>()
{
	return EOldPackageEngine_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EN_UE40.Comment", "/** Unreal Engine 4. Package Version 555. */" },
		{ "EN_UE40.DisplayName", "Unreal Engine 4" },
		{ "EN_UE40.Name", "EOldPackageEngine::EN_UE40" },
		{ "EN_UE40.ToolTip", "Unreal Engine 4. Package Version 555." },
		{ "EN_UE50.Comment", "/** Unreal Engine 5.0 - 5.3. Package Version 1009. */" },
		{ "EN_UE50.DisplayName", "Unreal Engine 5.0+" },
		{ "EN_UE50.Name", "EOldPackageEngine::EN_UE50" },
		{ "EN_UE50.ToolTip", "Unreal Engine 5.0 - 5.3. Package Version 1009." },
		{ "EN_UE54.Comment", "/** Unreal Engine 5.4 and newer. Package Version 1012 or higher. */" },
		{ "EN_UE54.DisplayName", "Unreal Engine 5.4+" },
		{ "EN_UE54.Name", "EOldPackageEngine::EN_UE54" },
		{ "EN_UE54.ToolTip", "Unreal Engine 5.4 and newer. Package Version 1012 or higher." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOldPackageEngine::EN_UE40", (int64)EOldPackageEngine::EN_UE40 },
		{ "EOldPackageEngine::EN_UE50", (int64)EOldPackageEngine::EN_UE50 },
		{ "EOldPackageEngine::EN_UE54", (int64)EOldPackageEngine::EN_UE54 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EOldPackageEngine",
	"EOldPackageEngine",
	Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine()
{
	if (!Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOldPackageEngine.InnerSingleton;
}
// End Enum EOldPackageEngine

// Begin Enum EWorldPartitionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionMethod;
static UEnum* EWorldPartitionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EWorldPartitionMethod"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionMethod.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EWorldPartitionMethod>()
{
	return EWorldPartitionMethod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** Automatic World Partition saving/loading is disabled. */" },
		{ "Disabled.Name", "EWorldPartitionMethod::Disabled" },
		{ "Disabled.ToolTip", "Automatic World Partition saving/loading is disabled." },
		{ "Enabled.Comment", "/** Automatic World Partition saving/loading is enabled. */" },
		{ "Enabled.Name", "EWorldPartitionMethod::Enabled" },
		{ "Enabled.ToolTip", "Automatic World Partition saving/loading is enabled." },
		{ "LoadOnly.Comment", "/** Automatic World Partition loading is enabled. All saving must be done manually. */" },
		{ "LoadOnly.Name", "EWorldPartitionMethod::LoadOnly" },
		{ "LoadOnly.ToolTip", "Automatic World Partition loading is enabled. All saving must be done manually." },
		{ "MemoryOnly.Comment", "/**\n\x09""Automatic World Partition loading is enabled. Data persists in memory during the session.\n\x09Improves stability and performance, but saving to disk must be done manually.\n\x09*/" },
		{ "MemoryOnly.Name", "EWorldPartitionMethod::MemoryOnly" },
		{ "MemoryOnly.ToolTip", "Automatic World Partition loading is enabled. Data persists in memory during the session.\nImproves stability and performance, but saving to disk must be done manually." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionMethod::Enabled", (int64)EWorldPartitionMethod::Enabled },
		{ "EWorldPartitionMethod::MemoryOnly", (int64)EWorldPartitionMethod::MemoryOnly },
		{ "EWorldPartitionMethod::LoadOnly", (int64)EWorldPartitionMethod::LoadOnly },
		{ "EWorldPartitionMethod::Disabled", (int64)EWorldPartitionMethod::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EWorldPartitionMethod",
	"EWorldPartitionMethod",
	Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionMethod.InnerSingleton;
}
// End Enum EWorldPartitionMethod

// Begin Enum EWorldPartitionInit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionInit;
static UEnum* EWorldPartitionInit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EWorldPartitionInit"));
	}
	return Z_Registration_Info_UEnum_EWorldPartitionInit.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EWorldPartitionInit>()
{
	return EWorldPartitionInit_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Automatically loads Level Actors on begin. */" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EWorldPartitionInit::Default" },
		{ "Default.ToolTip", "Automatically loads Level Actors on begin." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "Skip.Comment", "/** Will not automatically load the Level at the beginning. */" },
		{ "Skip.DisplayName", "Skip Initial Load" },
		{ "Skip.Name", "EWorldPartitionInit::Skip" },
		{ "Skip.ToolTip", "Will not automatically load the Level at the beginning." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPartitionInit::Default", (int64)EWorldPartitionInit::Default },
		{ "EWorldPartitionInit::Skip", (int64)EWorldPartitionInit::Skip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EWorldPartitionInit",
	"EWorldPartitionInit",
	Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit()
{
	if (!Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPartitionInit.InnerSingleton;
}
// End Enum EWorldPartitionInit

// Begin Enum ELoadedStateMod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadedStateMod;
static UEnum* ELoadedStateMod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadedStateMod"));
	}
	return Z_Registration_Info_UEnum_ELoadedStateMod.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadedStateMod>()
{
	return ELoadedStateMod_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Loaded.Comment", "/** Set the state of the Actor to loaded. */" },
		{ "Loaded.DisplayName", "Loaded" },
		{ "Loaded.Name", "ELoadedStateMod::Loaded" },
		{ "Loaded.ToolTip", "Set the state of the Actor to loaded." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "NoModify.Comment", "/** The loaded state of the Actor is not changed. */" },
		{ "NoModify.DisplayName", "Do Not Change" },
		{ "NoModify.Name", "ELoadedStateMod::NoModify" },
		{ "NoModify.ToolTip", "The loaded state of the Actor is not changed." },
		{ "Unloaded.Comment", "/** Set the state of the Actor to unloaded. */" },
		{ "Unloaded.DisplayName", "Unloaded" },
		{ "Unloaded.Name", "ELoadedStateMod::Unloaded" },
		{ "Unloaded.ToolTip", "Set the state of the Actor to unloaded." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadedStateMod::NoModify", (int64)ELoadedStateMod::NoModify },
		{ "ELoadedStateMod::Unloaded", (int64)ELoadedStateMod::Unloaded },
		{ "ELoadedStateMod::Loaded", (int64)ELoadedStateMod::Loaded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"ELoadedStateMod",
	"ELoadedStateMod",
	Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod()
{
	if (!Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadedStateMod.InnerSingleton;
}
// End Enum ELoadedStateMod

// Begin Enum EResetCustomSaveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResetCustomSaveType;
static UEnum* EResetCustomSaveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResetCustomSaveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResetCustomSaveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EResetCustomSaveType"));
	}
	return Z_Registration_Info_UEnum_EResetCustomSaveType.OuterSingleton;
}
template<> EASYMULTISAVE_API UEnum* StaticEnum<EResetCustomSaveType>()
{
	return EResetCustomSaveType_StaticEnum();
}
struct Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClearMemory.Comment", "/** Clears only the memory data while keeping the current property values intact. */" },
		{ "ClearMemory.DisplayName", "Memory Only" },
		{ "ClearMemory.Name", "EResetCustomSaveType::ClearMemory" },
		{ "ClearMemory.ToolTip", "Clears only the memory data while keeping the current property values intact." },
		{ "Full.Comment", "/** Resets all properties to their default values and clears all memory data, allowing the Custom Save to be fully reloaded from disk. */" },
		{ "Full.DisplayName", "Memory and Object" },
		{ "Full.Name", "EResetCustomSaveType::Full" },
		{ "Full.ToolTip", "Resets all properties to their default values and clears all memory data, allowing the Custom Save to be fully reloaded from disk." },
		{ "ModuleRelativePath", "Data/Public/EMSTypes.h" },
		{ "ResetDefault.Comment", "/** Resets all properties to their default values for the object in memory. */" },
		{ "ResetDefault.DisplayName", "Object Only" },
		{ "ResetDefault.Name", "EResetCustomSaveType::ResetDefault" },
		{ "ResetDefault.ToolTip", "Resets all properties to their default values for the object in memory." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResetCustomSaveType::Full", (int64)EResetCustomSaveType::Full },
		{ "EResetCustomSaveType::ClearMemory", (int64)EResetCustomSaveType::ClearMemory },
		{ "EResetCustomSaveType::ResetDefault", (int64)EResetCustomSaveType::ResetDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	"EResetCustomSaveType",
	"EResetCustomSaveType",
	Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType()
{
	if (!Z_Registration_Info_UEnum_EResetCustomSaveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResetCustomSaveType.InnerSingleton, Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResetCustomSaveType.InnerSingleton;
}
// End Enum EResetCustomSaveType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EActorType_StaticEnum, TEXT("EActorType"), &Z_Registration_Info_UEnum_EActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1108909141U) },
		{ EDataLoadType_StaticEnum, TEXT("EDataLoadType"), &Z_Registration_Info_UEnum_EDataLoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1962519626U) },
		{ ESaveGameMode_StaticEnum, TEXT("ESaveGameMode"), &Z_Registration_Info_UEnum_ESaveGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3904324263U) },
		{ EAsyncCheckType_StaticEnum, TEXT("EAsyncCheckType"), &Z_Registration_Info_UEnum_EAsyncCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3356202551U) },
		{ ESaveErrorType_StaticEnum, TEXT("ESaveErrorType"), &Z_Registration_Info_UEnum_ESaveErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2132285875U) },
		{ EPrepareType_StaticEnum, TEXT("EPrepareType"), &Z_Registration_Info_UEnum_EPrepareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 656808089U) },
		{ EFileValidity_StaticEnum, TEXT("EFileValidity"), &Z_Registration_Info_UEnum_EFileValidity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3848764590U) },
		{ ENextStepType_StaticEnum, TEXT("ENextStepType"), &Z_Registration_Info_UEnum_ENextStepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2101210271U) },
		{ ELoadMethod_StaticEnum, TEXT("ELoadMethod"), &Z_Registration_Info_UEnum_ELoadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1992725822U) },
		{ EFileSaveMethod_StaticEnum, TEXT("EFileSaveMethod"), &Z_Registration_Info_UEnum_EFileSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3963325616U) },
		{ ESaveTypeFlags_StaticEnum, TEXT("ESaveTypeFlags"), &Z_Registration_Info_UEnum_ESaveTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 713720697U) },
		{ ELoadTypeFlags_StaticEnum, TEXT("ELoadTypeFlags"), &Z_Registration_Info_UEnum_ELoadTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4027736784U) },
		{ EMultiLevelSaveMethod_StaticEnum, TEXT("EMultiLevelSaveMethod"), &Z_Registration_Info_UEnum_EMultiLevelSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2021205860U) },
		{ EThumbnailImageFormat_StaticEnum, TEXT("EThumbnailImageFormat"), &Z_Registration_Info_UEnum_EThumbnailImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1428118407U) },
		{ ESaveFileCheckType_StaticEnum, TEXT("ESaveFileCheckType"), &Z_Registration_Info_UEnum_ESaveFileCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4108930395U) },
		{ EOldPackageEngine_StaticEnum, TEXT("EOldPackageEngine"), &Z_Registration_Info_UEnum_EOldPackageEngine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2632973964U) },
		{ EWorldPartitionMethod_StaticEnum, TEXT("EWorldPartitionMethod"), &Z_Registration_Info_UEnum_EWorldPartitionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 853741963U) },
		{ EWorldPartitionInit_StaticEnum, TEXT("EWorldPartitionInit"), &Z_Registration_Info_UEnum_EWorldPartitionInit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4271890696U) },
		{ ELoadedStateMod_StaticEnum, TEXT("ELoadedStateMod"), &Z_Registration_Info_UEnum_ELoadedStateMod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1916932639U) },
		{ EResetCustomSaveType_StaticEnum, TEXT("EResetCustomSaveType"), &Z_Registration_Info_UEnum_EResetCustomSaveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3768401078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h_1418002997(TEXT("/Script/EasyMultiSave"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
