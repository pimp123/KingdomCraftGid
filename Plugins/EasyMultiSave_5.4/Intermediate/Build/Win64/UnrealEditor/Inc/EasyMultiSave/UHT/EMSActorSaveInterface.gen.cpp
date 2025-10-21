// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Interface/Public/EMSActorSaveInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSActorSaveInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSActorSaveInterface();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSActorSaveInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References

// Begin Interface UEMSActorSaveInterface Function ActorLoaded
void IEMSActorSaveInterface::ActorLoaded()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorLoaded instead.");
}
static FName NAME_UEMSActorSaveInterface_ActorLoaded = FName(TEXT("ActorLoaded"));
void IEMSActorSaveInterface::Execute_ActorLoaded(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorLoaded);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
	{
		I->ActorLoaded_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Actor and all of it's components have been loaded.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed after the Actor and all of it's components have been loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSActorSaveInterface::execActorLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActorLoaded_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSActorSaveInterface Function ActorLoaded

// Begin Interface UEMSActorSaveInterface Function ActorPreLoad
void IEMSActorSaveInterface::ActorPreLoad()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorPreLoad instead.");
}
static FName NAME_UEMSActorSaveInterface_ActorPreLoad = FName(TEXT("ActorPreLoad"));
void IEMSActorSaveInterface::Execute_ActorPreLoad(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorPreLoad);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
	{
		I->ActorPreLoad_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed right before the Actor and all of it's components are loaded.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed right before the Actor and all of it's components are loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorPreLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSActorSaveInterface::execActorPreLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActorPreLoad_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSActorSaveInterface Function ActorPreLoad

// Begin Interface UEMSActorSaveInterface Function ActorPreSave
void IEMSActorSaveInterface::ActorPreSave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorPreSave instead.");
}
static FName NAME_UEMSActorSaveInterface_ActorPreSave = FName(TEXT("ActorPreSave"));
void IEMSActorSaveInterface::Execute_ActorPreSave(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorPreSave);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
	{
		I->ActorPreSave_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed before the Actor and all of it's components are saved.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed before the Actor and all of it's components are saved." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorPreSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSActorSaveInterface::execActorPreSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActorPreSave_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSActorSaveInterface Function ActorPreSave

// Begin Interface UEMSActorSaveInterface Function ActorSaved
void IEMSActorSaveInterface::ActorSaved()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorSaved instead.");
}
static FName NAME_UEMSActorSaveInterface_ActorSaved = FName(TEXT("ActorSaved"));
void IEMSActorSaveInterface::Execute_ActorSaved(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorSaved);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
	{
		I->ActorSaved_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed when the Actor and all of it's components have been saved.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed when the Actor and all of it's components have been saved." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorSaved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSActorSaveInterface::execActorSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActorSaved_Implementation();
	P_NATIVE_END;
}
// End Interface UEMSActorSaveInterface Function ActorSaved

// Begin Interface UEMSActorSaveInterface Function ComponentsToSave
struct EMSActorSaveInterface_eventComponentsToSave_Parms
{
	TArray<UActorComponent*> Components;
};
void IEMSActorSaveInterface::ComponentsToSave(TArray<UActorComponent*>& Components)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentsToSave instead.");
}
static FName NAME_UEMSActorSaveInterface_ComponentsToSave = FName(TEXT("ComponentsToSave"));
void IEMSActorSaveInterface::Execute_ComponentsToSave(UObject* O, TArray<UActorComponent*>& Components)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
	EMSActorSaveInterface_eventComponentsToSave_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ComponentsToSave);
	if (Func)
	{
		Parms.Components=Components;
		O->ProcessEvent(Func, &Parms);
		Components=Parms.Components;
	}
	else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
	{
		I->ComponentsToSave_Implementation(Components);
	}
}
struct Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**\n\x09* (Not Level Blueprints) Holds the array of components that you want to save for the Actor.\n\x09* This function is not relevant for Level Blueprints, as they cannot have components.\n\x09*\n\x09* @param Components - The Components that you want to save with the Actor.\n\x09*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "(Not Level Blueprints) Holds the array of components that you want to save for the Actor.\nThis function is not relevant for Level Blueprints, as they cannot have components.\n\n@param Components - The Components that you want to save with the Actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSActorSaveInterface_eventComponentsToSave_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ComponentsToSave", nullptr, nullptr, Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers), sizeof(EMSActorSaveInterface_eventComponentsToSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(EMSActorSaveInterface_eventComponentsToSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSActorSaveInterface::execComponentsToSave)
{
	P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_Components);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentsToSave_Implementation(Z_Param_Out_Components);
	P_NATIVE_END;
}
// End Interface UEMSActorSaveInterface Function ComponentsToSave

// Begin Interface UEMSActorSaveInterface
void UEMSActorSaveInterface::StaticRegisterNativesUEMSActorSaveInterface()
{
	UClass* Class = UEMSActorSaveInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActorLoaded", &IEMSActorSaveInterface::execActorLoaded },
		{ "ActorPreLoad", &IEMSActorSaveInterface::execActorPreLoad },
		{ "ActorPreSave", &IEMSActorSaveInterface::execActorPreSave },
		{ "ActorSaved", &IEMSActorSaveInterface::execActorSaved },
		{ "ComponentsToSave", &IEMSActorSaveInterface::execComponentsToSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSActorSaveInterface);
UClass* Z_Construct_UClass_UEMSActorSaveInterface_NoRegister()
{
	return UEMSActorSaveInterface::StaticClass();
}
struct Z_Construct_UClass_UEMSActorSaveInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Easy Multi Save" },
		{ "DisplayName", "EMS Actor Save Interface" },
		{ "ModuleRelativePath", "Interface/Public/EMSActorSaveInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded, "ActorLoaded" }, // 2032258268
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreLoad, "ActorPreLoad" }, // 3409135744
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave, "ActorPreSave" }, // 3857601282
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved, "ActorSaved" }, // 162836197
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave, "ComponentsToSave" }, // 2490051807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEMSActorSaveInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEMSActorSaveInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSActorSaveInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSActorSaveInterface_Statics::ClassParams = {
	&UEMSActorSaveInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSActorSaveInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSActorSaveInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEMSActorSaveInterface()
{
	if (!Z_Registration_Info_UClass_UEMSActorSaveInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSActorSaveInterface.OuterSingleton, Z_Construct_UClass_UEMSActorSaveInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSActorSaveInterface.OuterSingleton;
}
template<> EASYMULTISAVE_API UClass* StaticClass<UEMSActorSaveInterface>()
{
	return UEMSActorSaveInterface::StaticClass();
}
UEMSActorSaveInterface::UEMSActorSaveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSActorSaveInterface);
UEMSActorSaveInterface::~UEMSActorSaveInterface() {}
// End Interface UEMSActorSaveInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSActorSaveInterface, UEMSActorSaveInterface::StaticClass, TEXT("UEMSActorSaveInterface"), &Z_Registration_Info_UClass_UEMSActorSaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSActorSaveInterface), 2865963551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_3317113507(TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
