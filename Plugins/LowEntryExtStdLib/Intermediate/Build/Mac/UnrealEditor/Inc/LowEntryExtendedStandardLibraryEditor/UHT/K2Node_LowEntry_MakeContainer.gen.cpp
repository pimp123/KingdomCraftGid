// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibraryEditor/Public/Classes/K2Node_LowEntry_MakeContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_MakeContainer() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeContainer();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// End Cross Module References

// Begin Class UK2Node_LowEntry_MakeContainer
void UK2Node_LowEntry_MakeContainer::StaticRegisterNativesUK2Node_LowEntry_MakeContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_LowEntry_MakeContainer);
UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_NoRegister()
{
	return UK2Node_LowEntry_MakeContainer::StaticClass();
}
struct Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_MakeContainer.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[] = {
		{ "Comment", "/** The number of input pins to generate for this node */" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeContainer.h" },
		{ "ToolTip", "The number of input pins to generate for this node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_MakeContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeContainer, NumInputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInputs_MetaData), NewProp_NumInputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::NewProp_NumInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_LowEntry_MakeContainer, IK2Node_AddPinInterface), false },  // 3816067142
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::ClassParams = {
	&UK2Node_LowEntry_MakeContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeContainer()
{
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_MakeContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LowEntry_MakeContainer.OuterSingleton, Z_Construct_UClass_UK2Node_LowEntry_MakeContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LowEntry_MakeContainer.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* StaticClass<UK2Node_LowEntry_MakeContainer>()
{
	return UK2Node_LowEntry_MakeContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LowEntry_MakeContainer);
UK2Node_LowEntry_MakeContainer::~UK2Node_LowEntry_MakeContainer() {}
// End Class UK2Node_LowEntry_MakeContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LowEntry_MakeContainer, UK2Node_LowEntry_MakeContainer::StaticClass, TEXT("UK2Node_LowEntry_MakeContainer"), &Z_Registration_Info_UClass_UK2Node_LowEntry_MakeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LowEntry_MakeContainer), 3168163649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeContainer_h_616971341(TEXT("/Script/LowEntryExtendedStandardLibraryEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
