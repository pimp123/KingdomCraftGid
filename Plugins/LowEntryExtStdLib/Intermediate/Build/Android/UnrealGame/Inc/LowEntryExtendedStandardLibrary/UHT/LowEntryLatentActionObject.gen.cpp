// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/ClassesLatentAction/LowEntryLatentActionObject.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References

// Begin Class ULowEntryLatentActionObject Function Done
struct Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics
{
	struct LowEntryLatentActionObject_eventDone_Parms
	{
		UObject* Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Causes the latent action to be done." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventDone_Parms, Result_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "Done", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::LowEntryLatentActionObject_eventDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::LowEntryLatentActionObject_eventDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_Done()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_Done_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionObject::execDone)
{
	P_GET_OBJECT(UObject,Z_Param_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Done(Z_Param_Result_);
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionObject Function Done

// Begin Class ULowEntryLatentActionObject Function GetResult
struct Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics
{
	struct LowEntryLatentActionObject_eventGetResult_Parms
	{
		UObject* Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Returns the result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventGetResult_Parms, Result_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "GetResult", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::LowEntryLatentActionObject_eventGetResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::LowEntryLatentActionObject_eventGetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionObject::execGetResult)
{
	P_GET_OBJECT_REF(UObject,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResult(P_ARG_GC_BARRIER(Z_Param_Out_Result_));
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionObject Function GetResult

// Begin Class ULowEntryLatentActionObject Function IsDone
struct Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics
{
	struct LowEntryLatentActionObject_eventIsDone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Returns true if the latent action is done." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLatentActionObject_eventIsDone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionObject_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "IsDone", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::LowEntryLatentActionObject_eventIsDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::LowEntryLatentActionObject_eventIsDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionObject::execIsDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDone();
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionObject Function IsDone

// Begin Class ULowEntryLatentActionObject Function WaitTillDone
struct Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics
{
	struct LowEntryLatentActionObject_eventWaitTillDone_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		UObject* Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Object" },
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ToolTip", "Waits till the latent action is done." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionObject_eventWaitTillDone_Parms, Result_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionObject, nullptr, "WaitTillDone", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::LowEntryLatentActionObject_eventWaitTillDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::LowEntryLatentActionObject_eventWaitTillDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionObject::execWaitTillDone)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,P_ARG_GC_BARRIER(Z_Param_Out_Result_));
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionObject Function WaitTillDone

// Begin Class ULowEntryLatentActionObject
void ULowEntryLatentActionObject::StaticRegisterNativesULowEntryLatentActionObject()
{
	UClass* Class = ULowEntryLatentActionObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Done", &ULowEntryLatentActionObject::execDone },
		{ "GetResult", &ULowEntryLatentActionObject::execGetResult },
		{ "IsDone", &ULowEntryLatentActionObject::execIsDone },
		{ "WaitTillDone", &ULowEntryLatentActionObject::execWaitTillDone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryLatentActionObject);
UClass* Z_Construct_UClass_ULowEntryLatentActionObject_NoRegister()
{
	return ULowEntryLatentActionObject::StaticClass();
}
struct Z_Construct_UClass_ULowEntryLatentActionObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionObject.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Finished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_Done, "Done" }, // 2951521539
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_GetResult, "GetResult" }, // 1614684910
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_IsDone, "IsDone" }, // 3811149201
		{ &Z_Construct_UFunction_ULowEntryLatentActionObject_WaitTillDone, "WaitTillDone" }, // 1577011097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_SetBit(void* Obj)
{
	((ULowEntryLatentActionObject*)Obj)->Finished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryLatentActionObject), &Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionObject, Result), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionObject, KeepAliveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepAliveCount_MetaData), NewProp_KeepAliveCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Finished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionObject_Statics::NewProp_KeepAliveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULowEntryLatentActionObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionObject_Statics::ClassParams = {
	&ULowEntryLatentActionObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryLatentActionObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULowEntryLatentActionObject()
{
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLatentActionObject.OuterSingleton, Z_Construct_UClass_ULowEntryLatentActionObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryLatentActionObject.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryLatentActionObject>()
{
	return ULowEntryLatentActionObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryLatentActionObject);
ULowEntryLatentActionObject::~ULowEntryLatentActionObject() {}
// End Class ULowEntryLatentActionObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLatentActionObject, ULowEntryLatentActionObject::StaticClass, TEXT("ULowEntryLatentActionObject"), &Z_Registration_Info_UClass_ULowEntryLatentActionObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLatentActionObject), 3348827436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionObject_h_719047713(TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
