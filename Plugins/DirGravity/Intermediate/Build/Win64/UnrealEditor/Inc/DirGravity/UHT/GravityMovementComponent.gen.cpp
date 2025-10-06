// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirGravity/Public/GravityMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIRGRAVITY_API UClass* Z_Construct_UClass_UGravityMovementComponent();
DIRGRAVITY_API UClass* Z_Construct_UClass_UGravityMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_DirGravity();
// End Cross Module References

// Begin Class UGravityMovementComponent Function GetGravityDir
struct Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics
{
	struct GravityMovementComponent_eventGetGravityDir_Parms
	{
		bool bAvoidZeroGravity;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "// Return the normalized direction of the current gravity.\n// @note Could return zero gravity.\n// \n// @param bAvoidZeroGravity - If true, zero gravity isn't returned.\n// @return Normalized direction of current gravity\n" },
		{ "CPP_Default_bAvoidZeroGravity", "false" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "Return the normalized direction of the current gravity.\n@note Could return zero gravity.\n\n@param bAvoidZeroGravity - If true, zero gravity isn't returned.\n@return Normalized direction of current gravity" },
	};
#endif // WITH_METADATA
	static void NewProp_bAvoidZeroGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidZeroGravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::NewProp_bAvoidZeroGravity_SetBit(void* Obj)
{
	((GravityMovementComponent_eventGetGravityDir_Parms*)Obj)->bAvoidZeroGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::NewProp_bAvoidZeroGravity = { "bAvoidZeroGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GravityMovementComponent_eventGetGravityDir_Parms), &Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::NewProp_bAvoidZeroGravity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityMovementComponent_eventGetGravityDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::NewProp_bAvoidZeroGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGravityMovementComponent, nullptr, "GetGravityDir", nullptr, nullptr, Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::GravityMovementComponent_eventGetGravityDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::GravityMovementComponent_eventGetGravityDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGravityMovementComponent::execGetGravityDir)
{
	P_GET_UBOOL(Z_Param_bAvoidZeroGravity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetGravityDir(Z_Param_bAvoidZeroGravity);
	P_NATIVE_END;
}
// End Class UGravityMovementComponent Function GetGravityDir

// Begin Class UGravityMovementComponent Function SetGravityDir
struct Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics
{
	struct GravityMovementComponent_eventSetGravityDir_Parms
	{
		FVector NewGravityDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "// Set a custom gravity direction; use 0, 0, 0 to remove any custom direction.\n// @note It can be influenced by GravityScale.\n// @param NewGravityDirection - New gravity direction, assumes it isn't normalize\n" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "Set a custom gravity direction; use 0, 0, 0 to remove any custom direction.\n@note It can be influenced by GravityScale.\n@param NewGravityDirection - New gravity direction, assumes it isn't normalize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityMovementComponent_eventSetGravityDir_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGravityDirection_MetaData), NewProp_NewGravityDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::NewProp_NewGravityDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGravityMovementComponent, nullptr, "SetGravityDir", nullptr, nullptr, Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::GravityMovementComponent_eventSetGravityDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::GravityMovementComponent_eventSetGravityDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGravityMovementComponent::execSetGravityDir)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGravityDir(Z_Param_Out_NewGravityDirection);
	P_NATIVE_END;
}
// End Class UGravityMovementComponent Function SetGravityDir

// Begin Class UGravityMovementComponent
void UGravityMovementComponent::StaticRegisterNativesUGravityMovementComponent()
{
	UClass* Class = UGravityMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGravityDir", &UGravityMovementComponent::execGetGravityDir },
		{ "SetGravityDir", &UGravityMovementComponent::execSetGravityDir },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGravityMovementComponent);
UClass* Z_Construct_UClass_UGravityMovementComponent_NoRegister()
{
	return UGravityMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UGravityMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Custom gravity movement component which moves provides directional gravity movement\n" },
		{ "IncludePath", "GravityMovementComponent.h" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "Custom gravity movement component which moves provides directional gravity movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugLines_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// When moving debug lines are shown - velocity, acceleration\n" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "When moving debug lines are shown - velocity, acceleration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomGravityDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowDebugLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugLines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomGravityDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGravityMovementComponent_GetGravityDir, "GetGravityDir" }, // 676360004
		{ &Z_Construct_UFunction_UGravityMovementComponent_SetGravityDir, "SetGravityDir" }, // 3120335508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGravityMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_SetBit(void* Obj)
{
	((UGravityMovementComponent*)Obj)->bShowDebugLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines = { "bShowDebugLines", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGravityMovementComponent), &Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugLines_MetaData), NewProp_bShowDebugLines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection = { "CustomGravityDirection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGravityMovementComponent, CustomGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomGravityDirection_MetaData), NewProp_CustomGravityDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGravityMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DirGravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGravityMovementComponent_Statics::ClassParams = {
	&UGravityMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGravityMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGravityMovementComponent()
{
	if (!Z_Registration_Info_UClass_UGravityMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGravityMovementComponent.OuterSingleton, Z_Construct_UClass_UGravityMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGravityMovementComponent.OuterSingleton;
}
template<> DIRGRAVITY_API UClass* StaticClass<UGravityMovementComponent>()
{
	return UGravityMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGravityMovementComponent);
UGravityMovementComponent::~UGravityMovementComponent() {}
// End Class UGravityMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGravityMovementComponent, UGravityMovementComponent::StaticClass, TEXT("UGravityMovementComponent"), &Z_Registration_Info_UClass_UGravityMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGravityMovementComponent), 2546194382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_2817020262(TEXT("/Script/DirGravity"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
