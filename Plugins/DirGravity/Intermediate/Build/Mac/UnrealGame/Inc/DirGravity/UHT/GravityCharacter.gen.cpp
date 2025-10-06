// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirGravity/Public/GravityCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityCharacter() {}

// Begin Cross Module References
DIRGRAVITY_API UClass* Z_Construct_UClass_AGravityCharacter();
DIRGRAVITY_API UClass* Z_Construct_UClass_AGravityCharacter_NoRegister();
DIRGRAVITY_API UClass* Z_Construct_UClass_UGravityMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_DirGravity();
// End Cross Module References

// Begin Class AGravityCharacter Function GetGravityMovementComponent
struct Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics
{
	struct GravityCharacter_eventGetGravityMovementComponent_Parms
	{
		UGravityMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/GravityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityCharacter_eventGetGravityMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UGravityMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityCharacter, nullptr, "GetGravityMovementComponent", nullptr, nullptr, Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::GravityCharacter_eventGetGravityMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::GravityCharacter_eventGetGravityMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGravityCharacter::execGetGravityMovementComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGravityMovementComponent**)Z_Param__Result=P_THIS->GetGravityMovementComponent();
	P_NATIVE_END;
}
// End Class AGravityCharacter Function GetGravityMovementComponent

// Begin Class AGravityCharacter
void AGravityCharacter::StaticRegisterNativesAGravityCharacter()
{
	UClass* Class = AGravityCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGravityMovementComponent", &AGravityCharacter::execGetGravityMovementComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGravityCharacter);
UClass* Z_Construct_UClass_AGravityCharacter_NoRegister()
{
	return AGravityCharacter::StaticClass();
}
struct Z_Construct_UClass_AGravityCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Gravity character class which overrides gravity movement component\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GravityCharacter.h" },
		{ "ModuleRelativePath", "Public/GravityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Gravity character class which overrides gravity movement component" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent, "GetGravityMovementComponent" }, // 3537279213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGravityCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DirGravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGravityCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGravityCharacter_Statics::ClassParams = {
	&AGravityCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGravityCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGravityCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGravityCharacter()
{
	if (!Z_Registration_Info_UClass_AGravityCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGravityCharacter.OuterSingleton, Z_Construct_UClass_AGravityCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGravityCharacter.OuterSingleton;
}
template<> DIRGRAVITY_API UClass* StaticClass<AGravityCharacter>()
{
	return AGravityCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityCharacter);
AGravityCharacter::~AGravityCharacter() {}
// End Class AGravityCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGravityCharacter, AGravityCharacter::StaticClass, TEXT("AGravityCharacter"), &Z_Registration_Info_UClass_AGravityCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGravityCharacter), 2776543446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_4158473362(TEXT("/Script/DirGravity"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
