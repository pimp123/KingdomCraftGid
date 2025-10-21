// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Interface/Public/EMSCompSaveInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSCompSaveInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Interface UEMSCompSaveInterface Function ComponentLoaded
void IEMSCompSaveInterface::ComponentLoaded()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentLoaded instead.");
}
static FName NAME_UEMSCompSaveInterface_ComponentLoaded = FName(TEXT("ComponentLoaded"));
void IEMSCompSaveInterface::Execute_ComponentLoaded(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentLoaded);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
	{
		I->ComponentLoaded_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Component has been loaded.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed after the Component has been loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentLoaded_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSCompSaveInterface Function ComponentLoaded

// Begin Interface UEMSCompSaveInterface Function ComponentPreLoad
void IEMSCompSaveInterface::ComponentPreLoad()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentPreLoad instead.");
}
static FName NAME_UEMSCompSaveInterface_ComponentPreLoad = FName(TEXT("ComponentPreLoad"));
void IEMSCompSaveInterface::Execute_ComponentPreLoad(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentPreLoad);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
	{
		I->ComponentPreLoad_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed right before the Component is loaded.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed right before the Component is loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentPreLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentPreLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentPreLoad_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSCompSaveInterface Function ComponentPreLoad

// Begin Interface UEMSCompSaveInterface Function ComponentPreSave
void IEMSCompSaveInterface::ComponentPreSave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentPreSave instead.");
}
static FName NAME_UEMSCompSaveInterface_ComponentPreSave = FName(TEXT("ComponentPreSave"));
void IEMSCompSaveInterface::Execute_ComponentPreSave(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentPreSave);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
	{
		I->ComponentPreSave_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed before the Component is saved.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed before the Component is saved." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentPreSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentPreSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentPreSave_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSCompSaveInterface Function ComponentPreSave

// Begin Interface UEMSCompSaveInterface Function ComponentSaved
void IEMSCompSaveInterface::ComponentSaved()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentSaved instead.");
}
static FName NAME_UEMSCompSaveInterface_ComponentSaved = FName(TEXT("ComponentSaved"));
void IEMSCompSaveInterface::Execute_ComponentSaved(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentSaved);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
	{
		I->ComponentSaved_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Component has been saved.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed after the Component has been saved." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentSaved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentSaved_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSCompSaveInterface Function ComponentSaved

// Begin Interface UEMSCompSaveInterface
void UEMSCompSaveInterface::StaticRegisterNativesUEMSCompSaveInterface()
{
	UClass* Class = UEMSCompSaveInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComponentLoaded", &IEMSCompSaveInterface::execComponentLoaded },
		{ "ComponentPreLoad", &IEMSCompSaveInterface::execComponentPreLoad },
		{ "ComponentPreSave", &IEMSCompSaveInterface::execComponentPreSave },
		{ "ComponentSaved", &IEMSCompSaveInterface::execComponentSaved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSCompSaveInterface);
UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister()
{
	return UEMSCompSaveInterface::StaticClass();
}
struct Z_Construct_UClass_UEMSCompSaveInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Easy Multi Save" },
		{ "DisplayName", "EMS Component Save Interface" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded, "ComponentLoaded" }, // 2021375790
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad, "ComponentPreLoad" }, // 2729033974
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave, "ComponentPreSave" }, // 501784537
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved, "ComponentSaved" }, // 3017428754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEMSCompSaveInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEMSCompSaveInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCompSaveInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSCompSaveInterface_Statics::ClassParams = {
	&UEMSCompSaveInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEMSCompSaveInterface()
{
	if (!Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton, Z_Construct_UClass_UEMSCompSaveInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton;
}
template<> EASYMULTISAVE_API UClass* StaticClass<UEMSCompSaveInterface>()
{
	return UEMSCompSaveInterface::StaticClass();
}
UEMSCompSaveInterface::UEMSCompSaveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSCompSaveInterface);
UEMSCompSaveInterface::~UEMSCompSaveInterface() {}
// End Interface UEMSCompSaveInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSCompSaveInterface, UEMSCompSaveInterface::StaticClass, TEXT("UEMSCompSaveInterface"), &Z_Registration_Info_UClass_UEMSCompSaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSCompSaveInterface), 1829958494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_2680393641(TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
