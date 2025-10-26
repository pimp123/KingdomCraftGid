// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTDataTable/Public/DTDataTableBPLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTDataTableBPLib() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
DTDATATABLE_API UClass* Z_Construct_UClass_UDTDataTableBPLib();
DTDATATABLE_API UClass* Z_Construct_UClass_UDTDataTableBPLib_NoRegister();
DTDATATABLE_API UClass* Z_Construct_UClass_UDTDataTableObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_DTDataTable();
// End Cross Module References

// Begin Class UDTDataTableBPLib Function CreateDTDataTableFromCSVFile
struct Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics
{
	struct DTDataTableBPLib_eventCreateDTDataTableFromCSVFile_Parms
	{
		FString FilePath;
		UScriptStruct* Struct;
		UDTDataTableObject* DTDataTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DT Data Table" },
		{ "DisplayName", "Create DT Data Table From CSV File" },
		{ "ModuleRelativePath", "Public/DTDataTableBPLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "DisplayName", "Row Struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DTDataTable_MetaData[] = {
		{ "DisplayName", "DT Data Table" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DTDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventCreateDTDataTableFromCSVFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventCreateDTDataTableFromCSVFile_Parms, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::NewProp_DTDataTable = { "DTDataTable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventCreateDTDataTableFromCSVFile_Parms, DTDataTable), Z_Construct_UClass_UDTDataTableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DTDataTable_MetaData), NewProp_DTDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::NewProp_DTDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTDataTableBPLib, nullptr, "CreateDTDataTableFromCSVFile", nullptr, nullptr, Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::DTDataTableBPLib_eventCreateDTDataTableFromCSVFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::DTDataTableBPLib_eventCreateDTDataTableFromCSVFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTDataTableBPLib::execCreateDTDataTableFromCSVFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_OBJECT(UScriptStruct,Z_Param_Struct);
	P_GET_OBJECT_REF(UDTDataTableObject,Z_Param_Out_DTDataTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDTDataTableBPLib::CreateDTDataTableFromCSVFile(Z_Param_FilePath,Z_Param_Struct,P_ARG_GC_BARRIER(Z_Param_Out_DTDataTable));
	P_NATIVE_END;
}
// End Class UDTDataTableBPLib Function CreateDTDataTableFromCSVFile

// Begin Class UDTDataTableBPLib Function CreateDTTableFromOtherTable
struct Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics
{
	struct DTDataTableBPLib_eventCreateDTTableFromOtherTable_Parms
	{
		const UDataTable* DataTable;
		UDTDataTableObject* DTDataTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DT Data Table" },
		{ "DisplayName", "Create DT Data Table From Other Table" },
		{ "ModuleRelativePath", "Public/DTDataTableBPLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DTDataTable_MetaData[] = {
		{ "DisplayName", "DT Data Table" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DTDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventCreateDTTableFromOtherTable_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::NewProp_DTDataTable = { "DTDataTable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventCreateDTTableFromOtherTable_Parms, DTDataTable), Z_Construct_UClass_UDTDataTableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DTDataTable_MetaData), NewProp_DTDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::NewProp_DTDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTDataTableBPLib, nullptr, "CreateDTTableFromOtherTable", nullptr, nullptr, Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::DTDataTableBPLib_eventCreateDTTableFromOtherTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::DTDataTableBPLib_eventCreateDTTableFromOtherTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTDataTableBPLib::execCreateDTTableFromOtherTable)
{
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_OBJECT_REF(UDTDataTableObject,Z_Param_Out_DTDataTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDTDataTableBPLib::CreateDTTableFromOtherTable(Z_Param_DataTable,P_ARG_GC_BARRIER(Z_Param_Out_DTDataTable));
	P_NATIVE_END;
}
// End Class UDTDataTableBPLib Function CreateDTTableFromOtherTable

// Begin Class UDTDataTableBPLib Function SaveCSVFile
struct Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics
{
	struct DTDataTableBPLib_eventSaveCSVFile_Parms
	{
		const UDataTable* DataTable;
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DT Data Table" },
		{ "DisplayName", "Save CSV File" },
		{ "ModuleRelativePath", "Public/DTDataTableBPLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventSaveCSVFile_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTDataTableBPLib_eventSaveCSVFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTDataTableBPLib, nullptr, "SaveCSVFile", nullptr, nullptr, Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::DTDataTableBPLib_eventSaveCSVFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::DTDataTableBPLib_eventSaveCSVFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTDataTableBPLib::execSaveCSVFile)
{
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDTDataTableBPLib::SaveCSVFile(Z_Param_DataTable,Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UDTDataTableBPLib Function SaveCSVFile

// Begin Class UDTDataTableBPLib
void UDTDataTableBPLib::StaticRegisterNativesUDTDataTableBPLib()
{
	UClass* Class = UDTDataTableBPLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDTDataTableFromCSVFile", &UDTDataTableBPLib::execCreateDTDataTableFromCSVFile },
		{ "CreateDTTableFromOtherTable", &UDTDataTableBPLib::execCreateDTTableFromOtherTable },
		{ "SaveCSVFile", &UDTDataTableBPLib::execSaveCSVFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTDataTableBPLib);
UClass* Z_Construct_UClass_UDTDataTableBPLib_NoRegister()
{
	return UDTDataTableBPLib::StaticClass();
}
struct Z_Construct_UClass_UDTDataTableBPLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "DT Data Table Function" },
		{ "IncludePath", "DTDataTableBPLib.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DTDataTableBPLib.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTDataTableBPLib_CreateDTDataTableFromCSVFile, "CreateDTDataTableFromCSVFile" }, // 1399737092
		{ &Z_Construct_UFunction_UDTDataTableBPLib_CreateDTTableFromOtherTable, "CreateDTTableFromOtherTable" }, // 251769287
		{ &Z_Construct_UFunction_UDTDataTableBPLib_SaveCSVFile, "SaveCSVFile" }, // 3265885996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTDataTableBPLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDTDataTableBPLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DTDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDataTableBPLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTDataTableBPLib_Statics::ClassParams = {
	&UDTDataTableBPLib::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDataTableBPLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTDataTableBPLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTDataTableBPLib()
{
	if (!Z_Registration_Info_UClass_UDTDataTableBPLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTDataTableBPLib.OuterSingleton, Z_Construct_UClass_UDTDataTableBPLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTDataTableBPLib.OuterSingleton;
}
template<> DTDATATABLE_API UClass* StaticClass<UDTDataTableBPLib>()
{
	return UDTDataTableBPLib::StaticClass();
}
UDTDataTableBPLib::UDTDataTableBPLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTDataTableBPLib);
UDTDataTableBPLib::~UDTDataTableBPLib() {}
// End Class UDTDataTableBPLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableBPLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTDataTableBPLib, UDTDataTableBPLib::StaticClass, TEXT("UDTDataTableBPLib"), &Z_Registration_Info_UClass_UDTDataTableBPLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTDataTableBPLib), 923026447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableBPLib_h_700741240(TEXT("/Script/DTDataTable"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableBPLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DTDataTable_Source_DTDataTable_Public_DTDataTableBPLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
