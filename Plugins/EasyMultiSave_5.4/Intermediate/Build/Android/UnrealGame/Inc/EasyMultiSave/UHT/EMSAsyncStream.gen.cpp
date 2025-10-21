// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Async/Public/EMSAsyncStream.h"
#include "EasyMultiSave/Data/Public/EMSData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncStream() {}

// Begin Cross Module References
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncStream();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncStream_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Class UEMSAsyncStream Function InitStreamingLoadTask
struct Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics
{
	struct EMSAsyncStream_eventInitStreamingLoadTask_Parms
	{
		UEMSObject* EMSObject;
		ULevel* InLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMSObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_EMSObject = { "EMSObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncStream_eventInitStreamingLoadTask_Parms, EMSObject), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncStream_eventInitStreamingLoadTask_Parms, InLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSAsyncStream_eventInitStreamingLoadTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSAsyncStream_eventInitStreamingLoadTask_Parms), &Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_EMSObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncStream, nullptr, "InitStreamingLoadTask", nullptr, nullptr, Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::EMSAsyncStream_eventInitStreamingLoadTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::EMSAsyncStream_eventInitStreamingLoadTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncStream::execInitStreamingLoadTask)
{
	P_GET_OBJECT(UEMSObject,Z_Param_EMSObject);
	P_GET_OBJECT(ULevel,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSAsyncStream::InitStreamingLoadTask(Z_Param_EMSObject,Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UEMSAsyncStream Function InitStreamingLoadTask

// Begin Class UEMSAsyncStream
void UEMSAsyncStream::StaticRegisterNativesUEMSAsyncStream()
{
	UClass* Class = UEMSAsyncStream::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitStreamingLoadTask", &UEMSAsyncStream::execInitStreamingLoadTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncStream);
UClass* Z_Construct_UClass_UEMSAsyncStream_NoRegister()
{
	return UEMSAsyncStream::StaticClass();
}
struct Z_Construct_UClass_UEMSAsyncStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async/Public/EMSAsyncStream.h" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevel_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamActorsMap_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrunedData_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncStream.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StreamActorsMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StreamActorsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StreamActorsMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrunedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncStream_InitStreamingLoadTask, "InitStreamingLoadTask" }, // 757632545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel = { "StreamingLevel", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, StreamingLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingLevel_MetaData), NewProp_StreamingLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMS_MetaData), NewProp_EMS_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_ValueProp = { "StreamActorsMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_Key_KeyProp = { "StreamActorsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap = { "StreamActorsMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, StreamActorsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamActorsMap_MetaData), NewProp_StreamActorsMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData = { "PrunedData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncStream, PrunedData), Z_Construct_UScriptStruct_FMultiLevelStreamingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrunedData_MetaData), NewProp_PrunedData_MetaData) }; // 1008679488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_EMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_StreamActorsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncStream_Statics::NewProp_PrunedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEMSAsyncStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncStream_Statics::ClassParams = {
	&UEMSAsyncStream::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSAsyncStream_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEMSAsyncStream()
{
	if (!Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton, Z_Construct_UClass_UEMSAsyncStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSAsyncStream.OuterSingleton;
}
template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncStream>()
{
	return UEMSAsyncStream::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncStream);
UEMSAsyncStream::~UEMSAsyncStream() {}
// End Class UEMSAsyncStream

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncStream, UEMSAsyncStream::StaticClass, TEXT("UEMSAsyncStream"), &Z_Registration_Info_UClass_UEMSAsyncStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncStream), 4163164862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h_1044870276(TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncStream_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
