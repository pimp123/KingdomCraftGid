// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/ClassesLatentAction/LowEntryLatentActionBoolean.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionBoolean() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionBoolean();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionBoolean_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References

// Begin Class ULowEntryLatentActionBoolean Function Done
struct Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics
{
	struct LowEntryLatentActionBoolean_eventDone_Parms
	{
		bool Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Boolean" },
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
		{ "ToolTip", "Causes the latent action to be done." },
	};
#endif // WITH_METADATA
	static void NewProp_Result__SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::NewProp_Result__SetBit(void* Obj)
{
	((LowEntryLatentActionBoolean_eventDone_Parms*)Obj)->Result_ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionBoolean_eventDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::NewProp_Result__SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionBoolean, nullptr, "Done", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::LowEntryLatentActionBoolean_eventDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::LowEntryLatentActionBoolean_eventDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionBoolean::execDone)
{
	P_GET_UBOOL(Z_Param_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Done(Z_Param_Result_);
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionBoolean Function Done

// Begin Class ULowEntryLatentActionBoolean Function GetResult
struct Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics
{
	struct LowEntryLatentActionBoolean_eventGetResult_Parms
	{
		bool Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Boolean" },
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
		{ "ToolTip", "Returns the result." },
	};
#endif // WITH_METADATA
	static void NewProp_Result__SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::NewProp_Result__SetBit(void* Obj)
{
	((LowEntryLatentActionBoolean_eventGetResult_Parms*)Obj)->Result_ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionBoolean_eventGetResult_Parms), &Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::NewProp_Result__SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionBoolean, nullptr, "GetResult", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::LowEntryLatentActionBoolean_eventGetResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::LowEntryLatentActionBoolean_eventGetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionBoolean::execGetResult)
{
	P_GET_UBOOL_REF(Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResult(Z_Param_Out_Result_);
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionBoolean Function GetResult

// Begin Class ULowEntryLatentActionBoolean Function IsDone
struct Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics
{
	struct LowEntryLatentActionBoolean_eventIsDone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Boolean" },
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
		{ "ToolTip", "Returns true if the latent action is done." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLatentActionBoolean_eventIsDone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionBoolean_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionBoolean, nullptr, "IsDone", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::LowEntryLatentActionBoolean_eventIsDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::LowEntryLatentActionBoolean_eventIsDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionBoolean::execIsDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDone();
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionBoolean Function IsDone

// Begin Class ULowEntryLatentActionBoolean Function WaitTillDone
struct Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics
{
	struct LowEntryLatentActionBoolean_eventWaitTillDone_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		bool Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Boolean" },
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
		{ "ToolTip", "Waits till the latent action is done." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static void NewProp_Result__SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionBoolean_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionBoolean_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
void Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_Result__SetBit(void* Obj)
{
	((LowEntryLatentActionBoolean_eventWaitTillDone_Parms*)Obj)->Result_ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionBoolean_eventWaitTillDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_Result__SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionBoolean, nullptr, "WaitTillDone", nullptr, nullptr, Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::LowEntryLatentActionBoolean_eventWaitTillDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::LowEntryLatentActionBoolean_eventWaitTillDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionBoolean::execWaitTillDone)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_UBOOL_REF(Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result_);
	P_NATIVE_END;
}
// End Class ULowEntryLatentActionBoolean Function WaitTillDone

// Begin Class ULowEntryLatentActionBoolean
void ULowEntryLatentActionBoolean::StaticRegisterNativesULowEntryLatentActionBoolean()
{
	UClass* Class = ULowEntryLatentActionBoolean::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Done", &ULowEntryLatentActionBoolean::execDone },
		{ "GetResult", &ULowEntryLatentActionBoolean::execGetResult },
		{ "IsDone", &ULowEntryLatentActionBoolean::execIsDone },
		{ "WaitTillDone", &ULowEntryLatentActionBoolean::execWaitTillDone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryLatentActionBoolean);
UClass* Z_Construct_UClass_ULowEntryLatentActionBoolean_NoRegister()
{
	return ULowEntryLatentActionBoolean::StaticClass();
}
struct Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionBoolean.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionBoolean.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Finished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionBoolean_Done, "Done" }, // 2011390875
		{ &Z_Construct_UFunction_ULowEntryLatentActionBoolean_GetResult, "GetResult" }, // 2080013408
		{ &Z_Construct_UFunction_ULowEntryLatentActionBoolean_IsDone, "IsDone" }, // 3283552283
		{ &Z_Construct_UFunction_ULowEntryLatentActionBoolean_WaitTillDone, "WaitTillDone" }, // 1053972602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionBoolean>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Finished_SetBit(void* Obj)
{
	((ULowEntryLatentActionBoolean*)Obj)->Finished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryLatentActionBoolean), &Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) };
void Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Result_SetBit(void* Obj)
{
	((ULowEntryLatentActionBoolean*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryLatentActionBoolean), &Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionBoolean, KeepAliveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepAliveCount_MetaData), NewProp_KeepAliveCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Finished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::NewProp_KeepAliveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::ClassParams = {
	&ULowEntryLatentActionBoolean::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULowEntryLatentActionBoolean()
{
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionBoolean.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLatentActionBoolean.OuterSingleton, Z_Construct_UClass_ULowEntryLatentActionBoolean_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryLatentActionBoolean.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryLatentActionBoolean>()
{
	return ULowEntryLatentActionBoolean::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryLatentActionBoolean);
ULowEntryLatentActionBoolean::~ULowEntryLatentActionBoolean() {}
// End Class ULowEntryLatentActionBoolean

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionBoolean_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLatentActionBoolean, ULowEntryLatentActionBoolean::StaticClass, TEXT("ULowEntryLatentActionBoolean"), &Z_Registration_Info_UClass_ULowEntryLatentActionBoolean, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLatentActionBoolean), 2183260250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionBoolean_h_2760502216(TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionBoolean_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionBoolean_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
