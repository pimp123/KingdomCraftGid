// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/LowEntryByteDataReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryByteDataReader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteDataReader();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteDataReader_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References

// Begin Class ULowEntryByteDataReader Function Empty
struct Z_Construct_UFunction_ULowEntryByteDataReader_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Causes Remaining to return 0.\n\x09*/" },
		{ "DisplayName", "Empty" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Causes Remaining to return 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "Empty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_Empty_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function Empty

// Begin Class ULowEntryByteDataReader Function GetBoolean
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics
{
	struct LowEntryByteDataReader_eventGetBoolean_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a boolean.\n\x09*/" },
		{ "DisplayName", "Get Boolean" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a boolean." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryByteDataReader_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryByteDataReader_eventGetBoolean_Parms), &Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetBoolean", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::LowEntryByteDataReader_eventGetBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::LowEntryByteDataReader_eventGetBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetBoolean)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolean();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetBoolean

// Begin Class ULowEntryByteDataReader Function GetBooleanArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics
{
	struct LowEntryByteDataReader_eventGetBooleanArray_Parms
	{
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a boolean array.\n\x09*/" },
		{ "DisplayName", "Get Boolean Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a boolean array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetBooleanArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetBooleanArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::LowEntryByteDataReader_eventGetBooleanArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::LowEntryByteDataReader_eventGetBooleanArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetBooleanArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetBooleanArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetBooleanArray

// Begin Class ULowEntryByteDataReader Function GetByte
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics
{
	struct LowEntryByteDataReader_eventGetByte_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte.\n\x09*/" },
		{ "DisplayName", "Get Byte" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a byte." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetByte", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::LowEntryByteDataReader_eventGetByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::LowEntryByteDataReader_eventGetByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetByte)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetByte();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetByte

// Begin Class ULowEntryByteDataReader Function GetByteArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics
{
	struct LowEntryByteDataReader_eventGetByteArray_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array.\n\x09*/" },
		{ "DisplayName", "Get Byte Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a byte array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetByteArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::LowEntryByteDataReader_eventGetByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::LowEntryByteDataReader_eventGetByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetByteArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetByteArray

// Begin Class ULowEntryByteDataReader Function GetClone
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics
{
	struct LowEntryByteDataReader_eventGetClone_Parms
	{
		ULowEntryByteDataReader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Clones the clone of this ByteDataReader.\n\x09* \n\x09* Allows you to easily read and revert the position (by cloning, reading data with the clone, and then throwing the clone away).\n\x09*/" },
		{ "DisplayName", "Get Clone" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Clones the clone of this ByteDataReader.\n\nAllows you to easily read and revert the position (by cloning, reading data with the clone, and then throwing the clone away)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryByteDataReader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetClone", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::LowEntryByteDataReader_eventGetClone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::LowEntryByteDataReader_eventGetClone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetClone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetClone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetClone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryByteDataReader**)Z_Param__Result=P_THIS->GetClone();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetClone

// Begin Class ULowEntryByteDataReader Function GetDouble
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics
{
	struct LowEntryByteDataReader_eventGetDouble_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double.\n\x09*/" },
		{ "DisplayName", "Get Double" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a double." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetDouble_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetDouble", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::LowEntryByteDataReader_eventGetDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::LowEntryByteDataReader_eventGetDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetDouble)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDouble();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetDouble

// Begin Class ULowEntryByteDataReader Function GetDoubleArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics
{
	struct LowEntryByteDataReader_eventGetDoubleArray_Parms
	{
		TArray<double> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double array.\n\x09*/" },
		{ "DisplayName", "Get Double Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a double array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetDoubleArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetDoubleArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::LowEntryByteDataReader_eventGetDoubleArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::LowEntryByteDataReader_eventGetDoubleArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetDoubleArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<double>*)Z_Param__Result=P_THIS->GetDoubleArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetDoubleArray

// Begin Class ULowEntryByteDataReader Function GetDoubleBytes
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics
{
	struct LowEntryByteDataReader_eventGetDoubleBytes_Parms
	{
		ULowEntryDouble* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double (bytes).\n\x09*/" },
		{ "DisplayName", "Get Double (bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a double (bytes)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetDoubleBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetDoubleBytes", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::LowEntryByteDataReader_eventGetDoubleBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::LowEntryByteDataReader_eventGetDoubleBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetDoubleBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryDouble**)Z_Param__Result=P_THIS->GetDoubleBytes();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetDoubleBytes

// Begin Class ULowEntryByteDataReader Function GetDoubleBytesArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics
{
	struct LowEntryByteDataReader_eventGetDoubleBytesArray_Parms
	{
		TArray<ULowEntryDouble*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double (byte) array.\n\x09*/" },
		{ "DisplayName", "Get Double (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a double (byte) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetDoubleBytesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetDoubleBytesArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::LowEntryByteDataReader_eventGetDoubleBytesArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::LowEntryByteDataReader_eventGetDoubleBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetDoubleBytesArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULowEntryDouble*>*)Z_Param__Result=P_THIS->GetDoubleBytesArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetDoubleBytesArray

// Begin Class ULowEntryByteDataReader Function GetFloat
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics
{
	struct LowEntryByteDataReader_eventGetFloat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a float.\n\x09*/" },
		{ "DisplayName", "Get Float" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::LowEntryByteDataReader_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::LowEntryByteDataReader_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetFloat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetFloat

// Begin Class ULowEntryByteDataReader Function GetFloatArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics
{
	struct LowEntryByteDataReader_eventGetFloatArray_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a float array.\n\x09*/" },
		{ "DisplayName", "Get Float Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a float array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetFloatArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetFloatArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::LowEntryByteDataReader_eventGetFloatArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::LowEntryByteDataReader_eventGetFloatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetFloatArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetFloatArray

// Begin Class ULowEntryByteDataReader Function GetInteger
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics
{
	struct LowEntryByteDataReader_eventGetInteger_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer.\n\x09*/" },
		{ "DisplayName", "Get Integer" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets an integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetInteger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetInteger", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::LowEntryByteDataReader_eventGetInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::LowEntryByteDataReader_eventGetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetInteger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInteger();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetInteger

// Begin Class ULowEntryByteDataReader Function GetIntegerArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics
{
	struct LowEntryByteDataReader_eventGetIntegerArray_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array.\n\x09*/" },
		{ "DisplayName", "Get Integer Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets an integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetIntegerArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetIntegerArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::LowEntryByteDataReader_eventGetIntegerArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::LowEntryByteDataReader_eventGetIntegerArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetIntegerArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetIntegerArray

// Begin Class ULowEntryByteDataReader Function GetLong
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics
{
	struct LowEntryByteDataReader_eventGetLong_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (int64).\n\x09*/" },
		{ "DisplayName", "Get Long" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a long (int64)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetLong_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetLong", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::LowEntryByteDataReader_eventGetLong_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::LowEntryByteDataReader_eventGetLong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetLong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetLong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetLong)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetLong();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetLong

// Begin Class ULowEntryByteDataReader Function GetLongArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics
{
	struct LowEntryByteDataReader_eventGetLongArray_Parms
	{
		TArray<int64> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (int64) array.\n\x09*/" },
		{ "DisplayName", "Get Long Array" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a long (int64) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetLongArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetLongArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::LowEntryByteDataReader_eventGetLongArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::LowEntryByteDataReader_eventGetLongArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetLongArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int64>*)Z_Param__Result=P_THIS->GetLongArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetLongArray

// Begin Class ULowEntryByteDataReader Function GetLongBytes
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics
{
	struct LowEntryByteDataReader_eventGetLongBytes_Parms
	{
		ULowEntryLong* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (bytes).\n\x09*/" },
		{ "DisplayName", "Get Long (bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a long (bytes)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetLongBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetLongBytes", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::LowEntryByteDataReader_eventGetLongBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::LowEntryByteDataReader_eventGetLongBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetLongBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryLong**)Z_Param__Result=P_THIS->GetLongBytes();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetLongBytes

// Begin Class ULowEntryByteDataReader Function GetLongBytesArray
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics
{
	struct LowEntryByteDataReader_eventGetLongBytesArray_Parms
	{
		TArray<ULowEntryLong*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (bytes) array.\n\x09*/" },
		{ "DisplayName", "Get Long (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a long (bytes) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetLongBytesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetLongBytesArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::LowEntryByteDataReader_eventGetLongBytesArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::LowEntryByteDataReader_eventGetLongBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetLongBytesArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULowEntryLong*>*)Z_Param__Result=P_THIS->GetLongBytesArray();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetLongBytesArray

// Begin Class ULowEntryByteDataReader Function GetPosition
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics
{
	struct LowEntryByteDataReader_eventGetPosition_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Returns the current position.\n\x09*/" },
		{ "DisplayName", "Get Position" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Returns the current position." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::LowEntryByteDataReader_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::LowEntryByteDataReader_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPosition

// Begin Class ULowEntryByteDataReader Function GetPositiveInteger1
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics
{
	struct LowEntryByteDataReader_eventGetPositiveInteger1_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 1" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPositiveInteger1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPositiveInteger1", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::LowEntryByteDataReader_eventGetPositiveInteger1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::LowEntryByteDataReader_eventGetPositiveInteger1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPositiveInteger1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger1();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPositiveInteger1

// Begin Class ULowEntryByteDataReader Function GetPositiveInteger1Array
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics
{
	struct LowEntryByteDataReader_eventGetPositiveInteger1Array_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 1 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPositiveInteger1Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPositiveInteger1Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::LowEntryByteDataReader_eventGetPositiveInteger1Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::LowEntryByteDataReader_eventGetPositiveInteger1Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPositiveInteger1Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger1Array();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPositiveInteger1Array

// Begin Class ULowEntryByteDataReader Function GetPositiveInteger2
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics
{
	struct LowEntryByteDataReader_eventGetPositiveInteger2_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 2" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPositiveInteger2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPositiveInteger2", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::LowEntryByteDataReader_eventGetPositiveInteger2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::LowEntryByteDataReader_eventGetPositiveInteger2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPositiveInteger2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger2();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPositiveInteger2

// Begin Class ULowEntryByteDataReader Function GetPositiveInteger2Array
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics
{
	struct LowEntryByteDataReader_eventGetPositiveInteger2Array_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 2 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPositiveInteger2Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPositiveInteger2Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::LowEntryByteDataReader_eventGetPositiveInteger2Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::LowEntryByteDataReader_eventGetPositiveInteger2Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPositiveInteger2Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger2Array();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPositiveInteger2Array

// Begin Class ULowEntryByteDataReader Function GetPositiveInteger3
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics
{
	struct LowEntryByteDataReader_eventGetPositiveInteger3_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 3" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPositiveInteger3_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPositiveInteger3", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::LowEntryByteDataReader_eventGetPositiveInteger3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::LowEntryByteDataReader_eventGetPositiveInteger3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPositiveInteger3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger3();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPositiveInteger3

// Begin Class ULowEntryByteDataReader Function GetPositiveInteger3Array
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics
{
	struct LowEntryByteDataReader_eventGetPositiveInteger3Array_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 3 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetPositiveInteger3Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetPositiveInteger3Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::LowEntryByteDataReader_eventGetPositiveInteger3Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::LowEntryByteDataReader_eventGetPositiveInteger3Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetPositiveInteger3Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger3Array();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetPositiveInteger3Array

// Begin Class ULowEntryByteDataReader Function GetStringUtf8
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics
{
	struct LowEntryByteDataReader_eventGetStringUtf8_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a String (UTF-8).\n\x09*/" },
		{ "DisplayName", "Get String (Utf 8)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a String (UTF-8)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetStringUtf8_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetStringUtf8", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::LowEntryByteDataReader_eventGetStringUtf8_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::LowEntryByteDataReader_eventGetStringUtf8_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetStringUtf8)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringUtf8();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetStringUtf8

// Begin Class ULowEntryByteDataReader Function GetStringUtf8Array
struct Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics
{
	struct LowEntryByteDataReader_eventGetStringUtf8Array_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a String (UTF-8) array.\n\x09*/" },
		{ "DisplayName", "Get String (Utf 8) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Gets a String (UTF-8) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventGetStringUtf8Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "GetStringUtf8Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::LowEntryByteDataReader_eventGetStringUtf8Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::LowEntryByteDataReader_eventGetStringUtf8Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execGetStringUtf8Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringUtf8Array();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function GetStringUtf8Array

// Begin Class ULowEntryByteDataReader Function Remaining
struct Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics
{
	struct LowEntryByteDataReader_eventRemaining_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Returns the amount of bytes left.\n\x09*/" },
		{ "DisplayName", "Get Remaining" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Returns the amount of bytes left." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "Remaining", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::LowEntryByteDataReader_eventRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::LowEntryByteDataReader_eventRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_Remaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_Remaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Remaining();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function Remaining

// Begin Class ULowEntryByteDataReader Function Reset
struct Z_Construct_UFunction_ULowEntryByteDataReader_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Sets the current position to 0.\n\x09*/" },
		{ "DisplayName", "Reset" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Sets the current position to 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function Reset

// Begin Class ULowEntryByteDataReader Function SetPosition
struct Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics
{
	struct LowEntryByteDataReader_eventSetPosition_Parms
	{
		int32 Position_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Byte Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Sets the current position.\n\x09*/" },
		{ "DisplayName", "Set Position" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
		{ "ToolTip", "Sets the current position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::NewProp_Position_ = { "Position_", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryByteDataReader_eventSetPosition_Parms, Position_), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position__MetaData), NewProp_Position__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::NewProp_Position_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryByteDataReader, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::LowEntryByteDataReader_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::LowEntryByteDataReader_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryByteDataReader::execSetPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Position_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosition(Z_Param_Position_);
	P_NATIVE_END;
}
// End Class ULowEntryByteDataReader Function SetPosition

// Begin Class ULowEntryByteDataReader
void ULowEntryByteDataReader::StaticRegisterNativesULowEntryByteDataReader()
{
	UClass* Class = ULowEntryByteDataReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Empty", &ULowEntryByteDataReader::execEmpty },
		{ "GetBoolean", &ULowEntryByteDataReader::execGetBoolean },
		{ "GetBooleanArray", &ULowEntryByteDataReader::execGetBooleanArray },
		{ "GetByte", &ULowEntryByteDataReader::execGetByte },
		{ "GetByteArray", &ULowEntryByteDataReader::execGetByteArray },
		{ "GetClone", &ULowEntryByteDataReader::execGetClone },
		{ "GetDouble", &ULowEntryByteDataReader::execGetDouble },
		{ "GetDoubleArray", &ULowEntryByteDataReader::execGetDoubleArray },
		{ "GetDoubleBytes", &ULowEntryByteDataReader::execGetDoubleBytes },
		{ "GetDoubleBytesArray", &ULowEntryByteDataReader::execGetDoubleBytesArray },
		{ "GetFloat", &ULowEntryByteDataReader::execGetFloat },
		{ "GetFloatArray", &ULowEntryByteDataReader::execGetFloatArray },
		{ "GetInteger", &ULowEntryByteDataReader::execGetInteger },
		{ "GetIntegerArray", &ULowEntryByteDataReader::execGetIntegerArray },
		{ "GetLong", &ULowEntryByteDataReader::execGetLong },
		{ "GetLongArray", &ULowEntryByteDataReader::execGetLongArray },
		{ "GetLongBytes", &ULowEntryByteDataReader::execGetLongBytes },
		{ "GetLongBytesArray", &ULowEntryByteDataReader::execGetLongBytesArray },
		{ "GetPosition", &ULowEntryByteDataReader::execGetPosition },
		{ "GetPositiveInteger1", &ULowEntryByteDataReader::execGetPositiveInteger1 },
		{ "GetPositiveInteger1Array", &ULowEntryByteDataReader::execGetPositiveInteger1Array },
		{ "GetPositiveInteger2", &ULowEntryByteDataReader::execGetPositiveInteger2 },
		{ "GetPositiveInteger2Array", &ULowEntryByteDataReader::execGetPositiveInteger2Array },
		{ "GetPositiveInteger3", &ULowEntryByteDataReader::execGetPositiveInteger3 },
		{ "GetPositiveInteger3Array", &ULowEntryByteDataReader::execGetPositiveInteger3Array },
		{ "GetStringUtf8", &ULowEntryByteDataReader::execGetStringUtf8 },
		{ "GetStringUtf8Array", &ULowEntryByteDataReader::execGetStringUtf8Array },
		{ "Remaining", &ULowEntryByteDataReader::execRemaining },
		{ "Reset", &ULowEntryByteDataReader::execReset },
		{ "SetPosition", &ULowEntryByteDataReader::execSetPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryByteDataReader);
UClass* Z_Construct_UClass_ULowEntryByteDataReader_NoRegister()
{
	return ULowEntryByteDataReader::StaticClass();
}
struct Z_Construct_UClass_ULowEntryByteDataReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryByteDataReader.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteDataReader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_Empty, "Empty" }, // 3229156514
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetBoolean, "GetBoolean" }, // 3638954630
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetBooleanArray, "GetBooleanArray" }, // 277889040
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetByte, "GetByte" }, // 2134521934
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetByteArray, "GetByteArray" }, // 2201473868
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetClone, "GetClone" }, // 2680196160
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetDouble, "GetDouble" }, // 1204427521
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleArray, "GetDoubleArray" }, // 2930679233
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytes, "GetDoubleBytes" }, // 281688242
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetDoubleBytesArray, "GetDoubleBytesArray" }, // 3645670372
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetFloat, "GetFloat" }, // 2811916984
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetFloatArray, "GetFloatArray" }, // 3967278278
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetInteger, "GetInteger" }, // 1131188255
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetIntegerArray, "GetIntegerArray" }, // 914051525
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetLong, "GetLong" }, // 2402231870
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetLongArray, "GetLongArray" }, // 981121931
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytes, "GetLongBytes" }, // 1927786181
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetLongBytesArray, "GetLongBytesArray" }, // 2510091494
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPosition, "GetPosition" }, // 3809609991
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1, "GetPositiveInteger1" }, // 1140072796
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger1Array, "GetPositiveInteger1Array" }, // 1914603584
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2, "GetPositiveInteger2" }, // 247399675
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger2Array, "GetPositiveInteger2Array" }, // 1216532781
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3, "GetPositiveInteger3" }, // 2172683241
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetPositiveInteger3Array, "GetPositiveInteger3Array" }, // 3827807555
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8, "GetStringUtf8" }, // 84932915
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_GetStringUtf8Array, "GetStringUtf8Array" }, // 1358478313
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_Remaining, "Remaining" }, // 2831725071
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_Reset, "Reset" }, // 1146844147
		{ &Z_Construct_UFunction_ULowEntryByteDataReader_SetPosition, "SetPosition" }, // 4162907037
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryByteDataReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryByteDataReader_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryByteDataReader_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryByteDataReader, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryByteDataReader_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryByteDataReader, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryByteDataReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteDataReader_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteDataReader_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteDataReader_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULowEntryByteDataReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryByteDataReader_Statics::ClassParams = {
	&ULowEntryByteDataReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryByteDataReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataReader_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteDataReader_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryByteDataReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULowEntryByteDataReader()
{
	if (!Z_Registration_Info_UClass_ULowEntryByteDataReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryByteDataReader.OuterSingleton, Z_Construct_UClass_ULowEntryByteDataReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryByteDataReader.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryByteDataReader>()
{
	return ULowEntryByteDataReader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryByteDataReader);
ULowEntryByteDataReader::~ULowEntryByteDataReader() {}
// End Class ULowEntryByteDataReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryByteDataReader, ULowEntryByteDataReader::StaticClass, TEXT("ULowEntryByteDataReader"), &Z_Registration_Info_UClass_ULowEntryByteDataReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryByteDataReader), 2454024774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_1399377749(TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
