// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/LowEntryByteArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryByteArray() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteArray();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteArray_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References

// Begin Class ULowEntryByteArray
void ULowEntryByteArray::StaticRegisterNativesULowEntryByteArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryByteArray);
UClass* Z_Construct_UClass_ULowEntryByteArray_NoRegister()
{
	return ULowEntryByteArray::StaticClass();
}
struct Z_Construct_UClass_ULowEntryByteArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryByteArray.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryByteArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryByteArray, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArray_MetaData), NewProp_ByteArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULowEntryByteArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryByteArray_Statics::ClassParams = {
	&ULowEntryByteArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryByteArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULowEntryByteArray()
{
	if (!Z_Registration_Info_UClass_ULowEntryByteArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryByteArray.OuterSingleton, Z_Construct_UClass_ULowEntryByteArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryByteArray.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryByteArray>()
{
	return ULowEntryByteArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryByteArray);
ULowEntryByteArray::~ULowEntryByteArray() {}
// End Class ULowEntryByteArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryByteArray, ULowEntryByteArray::StaticClass, TEXT("ULowEntryByteArray"), &Z_Registration_Info_UClass_ULowEntryByteArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryByteArray), 2670814996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h_3277968533(TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
