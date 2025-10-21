// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Async/Public/EMSAsyncWait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncWait() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncWait();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncWait_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType();
EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Delegate FAsyncWaitOutputPin
struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncWaitOutputPin__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncWaitOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitOutputPin)
{
	AsyncWaitOutputPin.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAsyncWaitOutputPin

// Begin Class UEMSAsyncWait Function AsyncWaitForOperation
struct Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics
{
	struct EMSAsyncWait_eventAsyncWaitForOperation_Parms
	{
		UObject* WorldContextObject;
		EAsyncCheckType CheckType;
		UEMSAsyncWait* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Wait until SaveGameActors or LoadGameActors have been completed.\n\x09* For example, this is useful if you want access loaded variables in a BeginPlay event instead of ActorLoaded.\n\x09* \n\x09* @param CheckType - The type of Async operation to wait for.\n\x09*/" },
		{ "CPP_Default_CheckType", "CT_Load" },
		{ "DisplayName", "Wait For Save or Load Completed" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncWait.h" },
		{ "ToolTip", "Wait until SaveGameActors or LoadGameActors have been completed.\nFor example, this is useful if you want access loaded variables in a BeginPlay event instead of ActorLoaded.\n\n@param CheckType - The type of Async operation to wait for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncWait_eventAsyncWaitForOperation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncWait_eventAsyncWaitForOperation_Parms, CheckType), Z_Construct_UEnum_EasyMultiSave_EAsyncCheckType, METADATA_PARAMS(0, nullptr) }; // 3356202551
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSAsyncWait_eventAsyncWaitForOperation_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncWait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_CheckType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncWait, nullptr, "AsyncWaitForOperation", nullptr, nullptr, Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::EMSAsyncWait_eventAsyncWaitForOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::EMSAsyncWait_eventAsyncWaitForOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSAsyncWait::execAsyncWaitForOperation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EAsyncCheckType,Z_Param_CheckType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEMSAsyncWait**)Z_Param__Result=UEMSAsyncWait::AsyncWaitForOperation(Z_Param_WorldContextObject,EAsyncCheckType(Z_Param_CheckType));
	P_NATIVE_END;
}
// End Class UEMSAsyncWait Function AsyncWaitForOperation

// Begin Class UEMSAsyncWait
void UEMSAsyncWait::StaticRegisterNativesUEMSAsyncWait()
{
	UClass* Class = UEMSAsyncWait::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncWaitForOperation", &UEMSAsyncWait::execAsyncWaitForOperation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncWait);
UClass* Z_Construct_UClass_UEMSAsyncWait_NoRegister()
{
	return UEMSAsyncWait::StaticClass();
}
struct Z_Construct_UClass_UEMSAsyncWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async/Public/EMSAsyncWait.h" },
		{ "ModuleRelativePath", "Async/Public/EMSAsyncWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Async/Public/EMSAsyncWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncWait_AsyncWaitForOperation, "AsyncWaitForOperation" }, // 2250426729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncWait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncWait, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1845962429
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSAsyncWait, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMS_MetaData), NewProp_EMS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncWait_Statics::NewProp_EMS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEMSAsyncWait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncWait_Statics::ClassParams = {
	&UEMSAsyncWait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncWait_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSAsyncWait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEMSAsyncWait()
{
	if (!Z_Registration_Info_UClass_UEMSAsyncWait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncWait.OuterSingleton, Z_Construct_UClass_UEMSAsyncWait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSAsyncWait.OuterSingleton;
}
template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncWait>()
{
	return UEMSAsyncWait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncWait);
UEMSAsyncWait::~UEMSAsyncWait() {}
// End Class UEMSAsyncWait

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncWait, UEMSAsyncWait::StaticClass, TEXT("UEMSAsyncWait"), &Z_Registration_Info_UClass_UEMSAsyncWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncWait), 505947524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_817633817(TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
