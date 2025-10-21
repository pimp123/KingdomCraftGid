// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Public/EMSTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYMULTISAVE_EMSTypes_generated_h
#error "EMSTypes.generated.h already included, missing '#pragma once' in EMSTypes.h"
#endif
#define EASYMULTISAVE_EMSTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSTypes_h


#define FOREACH_ENUM_EACTORTYPE(op) \
	op(EActorType::AT_Runtime) \
	op(EActorType::AT_Placed) \
	op(EActorType::AT_LevelScript) \
	op(EActorType::AT_PlayerActor) \
	op(EActorType::AT_PlayerPawn) \
	op(EActorType::AT_GameObject) \
	op(EActorType::AT_Persistent) \
	op(EActorType::AT_Destroyed) 

enum class EActorType : uint8;
template<> struct TIsUEnumClass<EActorType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EActorType>();

#define FOREACH_ENUM_EDATALOADTYPE(op) \
	op(EDataLoadType::DATA_Level) \
	op(EDataLoadType::DATA_Player) \
	op(EDataLoadType::DATA_Object) 

enum class EDataLoadType : uint8;
template<> struct TIsUEnumClass<EDataLoadType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EDataLoadType>();

#define FOREACH_ENUM_ESAVEGAMEMODE(op) \
	op(ESaveGameMode::MODE_Player) \
	op(ESaveGameMode::MODE_Level) \
	op(ESaveGameMode::MODE_All) 

enum class ESaveGameMode : uint8;
template<> struct TIsUEnumClass<ESaveGameMode> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveGameMode>();

#define FOREACH_ENUM_EASYNCCHECKTYPE(op) \
	op(EAsyncCheckType::CT_Both) \
	op(EAsyncCheckType::CT_Save) \
	op(EAsyncCheckType::CT_Load) 

enum class EAsyncCheckType : uint8;
template<> struct TIsUEnumClass<EAsyncCheckType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EAsyncCheckType>();

#define FOREACH_ENUM_ESAVEERRORTYPE(op) \
	op(ESaveErrorType::ER_Player) \
	op(ESaveErrorType::ER_Level) \
	op(ESaveErrorType::ER_Object) 

enum class ESaveErrorType : uint8;
template<> struct TIsUEnumClass<ESaveErrorType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveErrorType>();

#define FOREACH_ENUM_EPREPARETYPE(op) \
	op(EPrepareType::PT_Default) \
	op(EPrepareType::PT_RuntimeOnly) \
	op(EPrepareType::PT_FullReload) 

enum class EPrepareType : uint8;
template<> struct TIsUEnumClass<EPrepareType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EPrepareType>();

#define FOREACH_ENUM_EFILEVALIDITY(op) \
	op(EFileValidity::FILE_VALID) \
	op(EFileValidity::FILE_MISSING) \
	op(EFileValidity::FILE_INVALID) 

enum class EFileValidity : uint8;
template<> struct TIsUEnumClass<EFileValidity> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EFileValidity>();

#define FOREACH_ENUM_ENEXTSTEPTYPE(op) \
	op(ENextStepType::SaveLevel) \
	op(ENextStepType::FinishSave) 

enum class ENextStepType : uint8;
template<> struct TIsUEnumClass<ENextStepType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ENextStepType>();

#define FOREACH_ENUM_ELOADMETHOD(op) \
	op(ELoadMethod::LM_Default) \
	op(ELoadMethod::LM_Deferred) \
	op(ELoadMethod::LM_Thread) 

enum class ELoadMethod : uint8;
template<> struct TIsUEnumClass<ELoadMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadMethod>();

#define FOREACH_ENUM_EFILESAVEMETHOD(op) \
	op(EFileSaveMethod::FM_Desktop) \
	op(EFileSaveMethod::FM_Console) 

enum class EFileSaveMethod : uint8;
template<> struct TIsUEnumClass<EFileSaveMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EFileSaveMethod>();

#define FOREACH_ENUM_ESAVETYPEFLAGS(op) \
	op(ESaveTypeFlags::SF_Player) \
	op(ESaveTypeFlags::SF_Level) 

enum class ESaveTypeFlags : uint8;
template<> struct TIsUEnumClass<ESaveTypeFlags> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveTypeFlags>();

#define FOREACH_ENUM_ELOADTYPEFLAGS(op) \
	op(ELoadTypeFlags::LF_Player) \
	op(ELoadTypeFlags::LF_Level) 

enum class ELoadTypeFlags : uint8;
template<> struct TIsUEnumClass<ELoadTypeFlags> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadTypeFlags>();

#define FOREACH_ENUM_EMULTILEVELSAVEMETHOD(op) \
	op(EMultiLevelSaveMethod::ML_Disabled) \
	op(EMultiLevelSaveMethod::ML_Normal) \
	op(EMultiLevelSaveMethod::ML_Stream) \
	op(EMultiLevelSaveMethod::ML_Full) 

enum class EMultiLevelSaveMethod : uint8;
template<> struct TIsUEnumClass<EMultiLevelSaveMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EMultiLevelSaveMethod>();

#define FOREACH_ENUM_ETHUMBNAILIMAGEFORMAT(op) \
	op(EThumbnailImageFormat::Png) \
	op(EThumbnailImageFormat::Jpeg) 

enum class EThumbnailImageFormat : uint8;
template<> struct TIsUEnumClass<EThumbnailImageFormat> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EThumbnailImageFormat>();

#define FOREACH_ENUM_ESAVEFILECHECKTYPE(op) \
	op(ESaveFileCheckType::CheckForGame) \
	op(ESaveFileCheckType::CheckForCustom) \
	op(ESaveFileCheckType::CheckForCustomSlot) \
	op(ESaveFileCheckType::CheckForSlotOnly) 

enum class ESaveFileCheckType : uint8;
template<> struct TIsUEnumClass<ESaveFileCheckType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveFileCheckType>();

#define FOREACH_ENUM_EOLDPACKAGEENGINE(op) \
	op(EOldPackageEngine::EN_UE40) \
	op(EOldPackageEngine::EN_UE50) \
	op(EOldPackageEngine::EN_UE54) 

enum class EOldPackageEngine : uint8;
template<> struct TIsUEnumClass<EOldPackageEngine> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EOldPackageEngine>();

#define FOREACH_ENUM_EWORLDPARTITIONMETHOD(op) \
	op(EWorldPartitionMethod::Enabled) \
	op(EWorldPartitionMethod::MemoryOnly) \
	op(EWorldPartitionMethod::LoadOnly) \
	op(EWorldPartitionMethod::Disabled) 

enum class EWorldPartitionMethod : uint8;
template<> struct TIsUEnumClass<EWorldPartitionMethod> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EWorldPartitionMethod>();

#define FOREACH_ENUM_EWORLDPARTITIONINIT(op) \
	op(EWorldPartitionInit::Default) \
	op(EWorldPartitionInit::Skip) 

enum class EWorldPartitionInit : uint8;
template<> struct TIsUEnumClass<EWorldPartitionInit> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EWorldPartitionInit>();

#define FOREACH_ENUM_ELOADEDSTATEMOD(op) \
	op(ELoadedStateMod::NoModify) \
	op(ELoadedStateMod::Unloaded) \
	op(ELoadedStateMod::Loaded) 

enum class ELoadedStateMod : uint8;
template<> struct TIsUEnumClass<ELoadedStateMod> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadedStateMod>();

#define FOREACH_ENUM_ERESETCUSTOMSAVETYPE(op) \
	op(EResetCustomSaveType::Full) \
	op(EResetCustomSaveType::ClearMemory) \
	op(EResetCustomSaveType::ResetDefault) 

enum class EResetCustomSaveType : uint8;
template<> struct TIsUEnumClass<EResetCustomSaveType> { enum { Value = true }; };
template<> EASYMULTISAVE_API UEnum* StaticEnum<EResetCustomSaveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
