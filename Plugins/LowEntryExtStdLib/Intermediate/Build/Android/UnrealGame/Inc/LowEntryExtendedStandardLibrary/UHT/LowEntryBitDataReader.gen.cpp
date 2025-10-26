// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/LowEntryBitDataReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryBitDataReader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataReader();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataReader_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References

// Begin Class ULowEntryBitDataReader Function Empty
struct Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Causes Remaining to return 0.\n\x09*/" },
		{ "DisplayName", "Empty" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Causes Remaining to return 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "Empty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function Empty

// Begin Class ULowEntryBitDataReader Function GetBit
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics
{
	struct LowEntryBitDataReader_eventGetBit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a bit.\n\x09*/" },
		{ "DisplayName", "Get Bit" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a bit." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryBitDataReader_eventGetBit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryBitDataReader_eventGetBit_Parms), &Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBit", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::LowEntryBitDataReader_eventGetBit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::LowEntryBitDataReader_eventGetBit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBit();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetBit

// Begin Class ULowEntryBitDataReader Function GetBitArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics
{
	struct LowEntryBitDataReader_eventGetBitArray_Parms
	{
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a bit array.\n\x09*/" },
		{ "DisplayName", "Get Bit Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a bit array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetBitArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBitArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::LowEntryBitDataReader_eventGetBitArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::LowEntryBitDataReader_eventGetBitArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBitArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetBitArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetBitArray

// Begin Class ULowEntryBitDataReader Function GetBoolean
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics
{
	struct LowEntryBitDataReader_eventGetBoolean_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a boolean, this does the same as getting a bit.\n\x09*/" },
		{ "DisplayName", "Get Boolean" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a boolean, this does the same as getting a bit." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryBitDataReader_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryBitDataReader_eventGetBoolean_Parms), &Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBoolean", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::LowEntryBitDataReader_eventGetBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::LowEntryBitDataReader_eventGetBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBoolean)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolean();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetBoolean

// Begin Class ULowEntryBitDataReader Function GetBooleanArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics
{
	struct LowEntryBitDataReader_eventGetBooleanArray_Parms
	{
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a boolean array, this does the same as getting a bit array.\n\x09*/" },
		{ "DisplayName", "Get Boolean Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a boolean array, this does the same as getting a bit array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetBooleanArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBooleanArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::LowEntryBitDataReader_eventGetBooleanArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::LowEntryBitDataReader_eventGetBooleanArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBooleanArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetBooleanArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetBooleanArray

// Begin Class ULowEntryBitDataReader Function GetByte
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics
{
	struct LowEntryBitDataReader_eventGetByte_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte.\n\x09*/" },
		{ "DisplayName", "Get Byte" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByte", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::LowEntryBitDataReader_eventGetByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::LowEntryBitDataReader_eventGetByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByte)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetByte();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetByte

// Begin Class ULowEntryBitDataReader Function GetByteArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics
{
	struct LowEntryBitDataReader_eventGetByteArray_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array.\n\x09*/" },
		{ "DisplayName", "Get Byte Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::LowEntryBitDataReader_eventGetByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::LowEntryBitDataReader_eventGetByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetByteArray

// Begin Class ULowEntryBitDataReader Function GetByteArrayLeastSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms
	{
		int32 BitCount;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteArrayLeastSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteArrayLeastSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArrayLeastSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetByteArrayLeastSignificantBits

// Begin Class ULowEntryBitDataReader Function GetByteArrayMostSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms
	{
		int32 BitCount;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteArrayMostSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteArrayMostSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArrayMostSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetByteArrayMostSignificantBits

// Begin Class ULowEntryBitDataReader Function GetByteLeastSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms
	{
		int32 BitCount;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteLeastSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteLeastSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetByteLeastSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetByteLeastSignificantBits

// Begin Class ULowEntryBitDataReader Function GetByteMostSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms
	{
		int32 BitCount;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteMostSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteMostSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetByteMostSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetByteMostSignificantBits

// Begin Class ULowEntryBitDataReader Function GetClone
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics
{
	struct LowEntryBitDataReader_eventGetClone_Parms
	{
		ULowEntryBitDataReader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Clones the clone of this BitDataReader.\n\x09* \n\x09* Allows you to easily read and revert the position (by cloning, reading data with the clone, and then throwing the clone away).\n\x09*/" },
		{ "DisplayName", "Get Clone" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Clones the clone of this BitDataReader.\n\nAllows you to easily read and revert the position (by cloning, reading data with the clone, and then throwing the clone away)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryBitDataReader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetClone", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::LowEntryBitDataReader_eventGetClone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::LowEntryBitDataReader_eventGetClone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetClone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetClone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryBitDataReader**)Z_Param__Result=P_THIS->GetClone();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetClone

// Begin Class ULowEntryBitDataReader Function GetDouble
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics
{
	struct LowEntryBitDataReader_eventGetDouble_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double.\n\x09*/" },
		{ "DisplayName", "Get Double" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a double." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetDouble_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetDouble", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::LowEntryBitDataReader_eventGetDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::LowEntryBitDataReader_eventGetDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetDouble)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDouble();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetDouble

// Begin Class ULowEntryBitDataReader Function GetDoubleArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics
{
	struct LowEntryBitDataReader_eventGetDoubleArray_Parms
	{
		TArray<double> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double array.\n\x09*/" },
		{ "DisplayName", "Get Double Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a double array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetDoubleArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetDoubleArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::LowEntryBitDataReader_eventGetDoubleArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::LowEntryBitDataReader_eventGetDoubleArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetDoubleArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<double>*)Z_Param__Result=P_THIS->GetDoubleArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetDoubleArray

// Begin Class ULowEntryBitDataReader Function GetDoubleBytes
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics
{
	struct LowEntryBitDataReader_eventGetDoubleBytes_Parms
	{
		ULowEntryDouble* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double (bytes).\n\x09*/" },
		{ "DisplayName", "Get Double (bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a double (bytes)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetDoubleBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetDoubleBytes", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::LowEntryBitDataReader_eventGetDoubleBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::LowEntryBitDataReader_eventGetDoubleBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetDoubleBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryDouble**)Z_Param__Result=P_THIS->GetDoubleBytes();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetDoubleBytes

// Begin Class ULowEntryBitDataReader Function GetDoubleBytesArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics
{
	struct LowEntryBitDataReader_eventGetDoubleBytesArray_Parms
	{
		TArray<ULowEntryDouble*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double (byte) array.\n\x09*/" },
		{ "DisplayName", "Get Double (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a double (byte) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetDoubleBytesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetDoubleBytesArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::LowEntryBitDataReader_eventGetDoubleBytesArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::LowEntryBitDataReader_eventGetDoubleBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetDoubleBytesArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULowEntryDouble*>*)Z_Param__Result=P_THIS->GetDoubleBytesArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetDoubleBytesArray

// Begin Class ULowEntryBitDataReader Function GetFloat
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics
{
	struct LowEntryBitDataReader_eventGetFloat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a float.\n\x09*/" },
		{ "DisplayName", "Get Float" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::LowEntryBitDataReader_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::LowEntryBitDataReader_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetFloat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetFloat

// Begin Class ULowEntryBitDataReader Function GetFloatArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics
{
	struct LowEntryBitDataReader_eventGetFloatArray_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a float array.\n\x09*/" },
		{ "DisplayName", "Get Float Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a float array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetFloatArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetFloatArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::LowEntryBitDataReader_eventGetFloatArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::LowEntryBitDataReader_eventGetFloatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetFloatArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetFloatArray

// Begin Class ULowEntryBitDataReader Function GetInteger
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics
{
	struct LowEntryBitDataReader_eventGetInteger_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer.\n\x09*/" },
		{ "DisplayName", "Get Integer" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetInteger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetInteger", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::LowEntryBitDataReader_eventGetInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::LowEntryBitDataReader_eventGetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetInteger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInteger();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetInteger

// Begin Class ULowEntryBitDataReader Function GetIntegerArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics
{
	struct LowEntryBitDataReader_eventGetIntegerArray_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array.\n\x09*/" },
		{ "DisplayName", "Get Integer Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::LowEntryBitDataReader_eventGetIntegerArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::LowEntryBitDataReader_eventGetIntegerArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetIntegerArray

// Begin Class ULowEntryBitDataReader Function GetIntegerArrayLeastSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms
	{
		int32 BitCount;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerArrayLeastSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerArrayLeastSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArrayLeastSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetIntegerArrayLeastSignificantBits

// Begin Class ULowEntryBitDataReader Function GetIntegerArrayMostSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms
	{
		int32 BitCount;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerArrayMostSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerArrayMostSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArrayMostSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetIntegerArrayMostSignificantBits

// Begin Class ULowEntryBitDataReader Function GetIntegerLeastSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms
	{
		int32 BitCount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCount_MetaData), NewProp_BitCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerLeastSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerLeastSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntegerLeastSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetIntegerLeastSignificantBits

// Begin Class ULowEntryBitDataReader Function GetIntegerMostSignificantBits
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics
{
	struct LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms
	{
		int32 BitCount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms, BitCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_BitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerMostSignificantBits", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerMostSignificantBits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntegerMostSignificantBits(Z_Param_BitCount);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetIntegerMostSignificantBits

// Begin Class ULowEntryBitDataReader Function GetLong
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics
{
	struct LowEntryBitDataReader_eventGetLong_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (int64).\n\x09*/" },
		{ "DisplayName", "Get Long" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a long (int64)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetLong_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetLong", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::LowEntryBitDataReader_eventGetLong_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::LowEntryBitDataReader_eventGetLong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetLong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetLong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetLong)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetLong();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetLong

// Begin Class ULowEntryBitDataReader Function GetLongArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics
{
	struct LowEntryBitDataReader_eventGetLongArray_Parms
	{
		TArray<int64> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (int64) array.\n\x09*/" },
		{ "DisplayName", "Get Long Array" },
		{ "Keywords", "int64 integer64" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a long (int64) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetLongArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetLongArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::LowEntryBitDataReader_eventGetLongArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::LowEntryBitDataReader_eventGetLongArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetLongArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int64>*)Z_Param__Result=P_THIS->GetLongArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetLongArray

// Begin Class ULowEntryBitDataReader Function GetLongBytes
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics
{
	struct LowEntryBitDataReader_eventGetLongBytes_Parms
	{
		ULowEntryLong* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (bytes).\n\x09*/" },
		{ "DisplayName", "Get Long (bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a long (bytes)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetLongBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetLongBytes", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::LowEntryBitDataReader_eventGetLongBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::LowEntryBitDataReader_eventGetLongBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetLongBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULowEntryLong**)Z_Param__Result=P_THIS->GetLongBytes();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetLongBytes

// Begin Class ULowEntryBitDataReader Function GetLongBytesArray
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics
{
	struct LowEntryBitDataReader_eventGetLongBytesArray_Parms
	{
		TArray<ULowEntryLong*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (bytes) array.\n\x09*/" },
		{ "DisplayName", "Get Long (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a long (bytes) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetLongBytesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetLongBytesArray", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::LowEntryBitDataReader_eventGetLongBytesArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::LowEntryBitDataReader_eventGetLongBytesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetLongBytesArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ULowEntryLong*>*)Z_Param__Result=P_THIS->GetLongBytesArray();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetLongBytesArray

// Begin Class ULowEntryBitDataReader Function GetPosition
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics
{
	struct LowEntryBitDataReader_eventGetPosition_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Returns the current position.\n\x09*\n\x09* Because this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB).\n\x09*/" },
		{ "DisplayName", "Get Position" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Returns the current position.\n\nBecause this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::LowEntryBitDataReader_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::LowEntryBitDataReader_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPosition

// Begin Class ULowEntryBitDataReader Function GetPositiveInteger1
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics
{
	struct LowEntryBitDataReader_eventGetPositiveInteger1_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 1" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger1", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::LowEntryBitDataReader_eventGetPositiveInteger1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::LowEntryBitDataReader_eventGetPositiveInteger1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger1();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPositiveInteger1

// Begin Class ULowEntryBitDataReader Function GetPositiveInteger1Array
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics
{
	struct LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 1 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger1Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger1Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger1Array();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPositiveInteger1Array

// Begin Class ULowEntryBitDataReader Function GetPositiveInteger2
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics
{
	struct LowEntryBitDataReader_eventGetPositiveInteger2_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 2" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger2", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::LowEntryBitDataReader_eventGetPositiveInteger2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::LowEntryBitDataReader_eventGetPositiveInteger2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger2();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPositiveInteger2

// Begin Class ULowEntryBitDataReader Function GetPositiveInteger2Array
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics
{
	struct LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 2 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger2Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger2Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger2Array();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPositiveInteger2Array

// Begin Class ULowEntryBitDataReader Function GetPositiveInteger3
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics
{
	struct LowEntryBitDataReader_eventGetPositiveInteger3_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 3" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger3_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger3", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::LowEntryBitDataReader_eventGetPositiveInteger3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::LowEntryBitDataReader_eventGetPositiveInteger3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger3();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPositiveInteger3

// Begin Class ULowEntryBitDataReader Function GetPositiveInteger3Array
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics
{
	struct LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 3 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger3Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger3Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger3Array();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetPositiveInteger3Array

// Begin Class ULowEntryBitDataReader Function GetStringUtf8
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics
{
	struct LowEntryBitDataReader_eventGetStringUtf8_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a String (UTF-8).\n\x09*/" },
		{ "DisplayName", "Get String (Utf 8)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a String (UTF-8)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetStringUtf8_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetStringUtf8", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::LowEntryBitDataReader_eventGetStringUtf8_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::LowEntryBitDataReader_eventGetStringUtf8_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetStringUtf8)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringUtf8();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetStringUtf8

// Begin Class ULowEntryBitDataReader Function GetStringUtf8Array
struct Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics
{
	struct LowEntryBitDataReader_eventGetStringUtf8Array_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a String (UTF-8) array.\n\x09*/" },
		{ "DisplayName", "Get String (Utf 8) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a String (UTF-8) array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetStringUtf8Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetStringUtf8Array", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::LowEntryBitDataReader_eventGetStringUtf8Array_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::LowEntryBitDataReader_eventGetStringUtf8Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execGetStringUtf8Array)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringUtf8Array();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function GetStringUtf8Array

// Begin Class ULowEntryBitDataReader Function Remaining
struct Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics
{
	struct LowEntryBitDataReader_eventRemaining_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Returns the amount of bytes left.\n\x09*/" },
		{ "DisplayName", "Get Remaining" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Returns the amount of bytes left." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "Remaining", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::LowEntryBitDataReader_eventRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::LowEntryBitDataReader_eventRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_Remaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Remaining();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function Remaining

// Begin Class ULowEntryBitDataReader Function Reset
struct Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Sets the current position to 0.\n\x09*/" },
		{ "DisplayName", "Reset" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Sets the current position to 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function Reset

// Begin Class ULowEntryBitDataReader Function SetPosition
struct Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics
{
	struct LowEntryBitDataReader_eventSetPosition_Parms
	{
		int32 Position_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Sets the current position.\n\x09*\n\x09* Because this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB).\n\x09*/" },
		{ "DisplayName", "Set Position" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Sets the current position.\n\nBecause this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position_ = { "Position_", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventSetPosition_Parms, Position_), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position__MetaData), NewProp_Position__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::LowEntryBitDataReader_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::LowEntryBitDataReader_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryBitDataReader::execSetPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Position_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosition(Z_Param_Position_);
	P_NATIVE_END;
}
// End Class ULowEntryBitDataReader Function SetPosition

// Begin Class ULowEntryBitDataReader
void ULowEntryBitDataReader::StaticRegisterNativesULowEntryBitDataReader()
{
	UClass* Class = ULowEntryBitDataReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Empty", &ULowEntryBitDataReader::execEmpty },
		{ "GetBit", &ULowEntryBitDataReader::execGetBit },
		{ "GetBitArray", &ULowEntryBitDataReader::execGetBitArray },
		{ "GetBoolean", &ULowEntryBitDataReader::execGetBoolean },
		{ "GetBooleanArray", &ULowEntryBitDataReader::execGetBooleanArray },
		{ "GetByte", &ULowEntryBitDataReader::execGetByte },
		{ "GetByteArray", &ULowEntryBitDataReader::execGetByteArray },
		{ "GetByteArrayLeastSignificantBits", &ULowEntryBitDataReader::execGetByteArrayLeastSignificantBits },
		{ "GetByteArrayMostSignificantBits", &ULowEntryBitDataReader::execGetByteArrayMostSignificantBits },
		{ "GetByteLeastSignificantBits", &ULowEntryBitDataReader::execGetByteLeastSignificantBits },
		{ "GetByteMostSignificantBits", &ULowEntryBitDataReader::execGetByteMostSignificantBits },
		{ "GetClone", &ULowEntryBitDataReader::execGetClone },
		{ "GetDouble", &ULowEntryBitDataReader::execGetDouble },
		{ "GetDoubleArray", &ULowEntryBitDataReader::execGetDoubleArray },
		{ "GetDoubleBytes", &ULowEntryBitDataReader::execGetDoubleBytes },
		{ "GetDoubleBytesArray", &ULowEntryBitDataReader::execGetDoubleBytesArray },
		{ "GetFloat", &ULowEntryBitDataReader::execGetFloat },
		{ "GetFloatArray", &ULowEntryBitDataReader::execGetFloatArray },
		{ "GetInteger", &ULowEntryBitDataReader::execGetInteger },
		{ "GetIntegerArray", &ULowEntryBitDataReader::execGetIntegerArray },
		{ "GetIntegerArrayLeastSignificantBits", &ULowEntryBitDataReader::execGetIntegerArrayLeastSignificantBits },
		{ "GetIntegerArrayMostSignificantBits", &ULowEntryBitDataReader::execGetIntegerArrayMostSignificantBits },
		{ "GetIntegerLeastSignificantBits", &ULowEntryBitDataReader::execGetIntegerLeastSignificantBits },
		{ "GetIntegerMostSignificantBits", &ULowEntryBitDataReader::execGetIntegerMostSignificantBits },
		{ "GetLong", &ULowEntryBitDataReader::execGetLong },
		{ "GetLongArray", &ULowEntryBitDataReader::execGetLongArray },
		{ "GetLongBytes", &ULowEntryBitDataReader::execGetLongBytes },
		{ "GetLongBytesArray", &ULowEntryBitDataReader::execGetLongBytesArray },
		{ "GetPosition", &ULowEntryBitDataReader::execGetPosition },
		{ "GetPositiveInteger1", &ULowEntryBitDataReader::execGetPositiveInteger1 },
		{ "GetPositiveInteger1Array", &ULowEntryBitDataReader::execGetPositiveInteger1Array },
		{ "GetPositiveInteger2", &ULowEntryBitDataReader::execGetPositiveInteger2 },
		{ "GetPositiveInteger2Array", &ULowEntryBitDataReader::execGetPositiveInteger2Array },
		{ "GetPositiveInteger3", &ULowEntryBitDataReader::execGetPositiveInteger3 },
		{ "GetPositiveInteger3Array", &ULowEntryBitDataReader::execGetPositiveInteger3Array },
		{ "GetStringUtf8", &ULowEntryBitDataReader::execGetStringUtf8 },
		{ "GetStringUtf8Array", &ULowEntryBitDataReader::execGetStringUtf8Array },
		{ "Remaining", &ULowEntryBitDataReader::execRemaining },
		{ "Reset", &ULowEntryBitDataReader::execReset },
		{ "SetPosition", &ULowEntryBitDataReader::execSetPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryBitDataReader);
UClass* Z_Construct_UClass_ULowEntryBitDataReader_NoRegister()
{
	return ULowEntryBitDataReader::StaticClass();
}
struct Z_Construct_UClass_ULowEntryBitDataReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryBitDataReader.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentByte_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBytePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentByte;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBytePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_Empty, "Empty" }, // 1600967707
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBit, "GetBit" }, // 35053714
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray, "GetBitArray" }, // 2218931474
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean, "GetBoolean" }, // 880330832
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray, "GetBooleanArray" }, // 2533637864
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByte, "GetByte" }, // 3807369982
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray, "GetByteArray" }, // 2044032527
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits, "GetByteArrayLeastSignificantBits" }, // 666416427
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits, "GetByteArrayMostSignificantBits" }, // 3286546943
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits, "GetByteLeastSignificantBits" }, // 1792195946
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits, "GetByteMostSignificantBits" }, // 3653210786
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetClone, "GetClone" }, // 4171352466
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetDouble, "GetDouble" }, // 3935565026
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleArray, "GetDoubleArray" }, // 3004338251
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes, "GetDoubleBytes" }, // 1109381198
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray, "GetDoubleBytesArray" }, // 1042913801
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat, "GetFloat" }, // 2291955539
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray, "GetFloatArray" }, // 3452781225
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger, "GetInteger" }, // 1233231635
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray, "GetIntegerArray" }, // 2498367179
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits, "GetIntegerArrayLeastSignificantBits" }, // 1676005712
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits, "GetIntegerArrayMostSignificantBits" }, // 3890316494
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits, "GetIntegerLeastSignificantBits" }, // 3963072616
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits, "GetIntegerMostSignificantBits" }, // 3622303018
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetLong, "GetLong" }, // 4051223348
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetLongArray, "GetLongArray" }, // 4015303243
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes, "GetLongBytes" }, // 2626329069
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray, "GetLongBytesArray" }, // 1453088862
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition, "GetPosition" }, // 4050576798
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1, "GetPositiveInteger1" }, // 111269328
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array, "GetPositiveInteger1Array" }, // 2665758187
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2, "GetPositiveInteger2" }, // 497756334
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array, "GetPositiveInteger2Array" }, // 3586710609
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3, "GetPositiveInteger3" }, // 397710490
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array, "GetPositiveInteger3Array" }, // 627795618
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8, "GetStringUtf8" }, // 3191401428
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array, "GetStringUtf8Array" }, // 4025572914
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_Remaining, "Remaining" }, // 1709102926
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_Reset, "Reset" }, // 956412876
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition, "SetPosition" }, // 3168375441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryBitDataReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataReader, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataReader, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte = { "CurrentByte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataReader, CurrentByte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentByte_MetaData), NewProp_CurrentByte_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition = { "CurrentBytePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataReader, CurrentBytePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBytePosition_MetaData), NewProp_CurrentBytePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULowEntryBitDataReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::ClassParams = {
	&ULowEntryBitDataReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryBitDataReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULowEntryBitDataReader()
{
	if (!Z_Registration_Info_UClass_ULowEntryBitDataReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryBitDataReader.OuterSingleton, Z_Construct_UClass_ULowEntryBitDataReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryBitDataReader.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryBitDataReader>()
{
	return ULowEntryBitDataReader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryBitDataReader);
ULowEntryBitDataReader::~ULowEntryBitDataReader() {}
// End Class ULowEntryBitDataReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataReader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryBitDataReader, ULowEntryBitDataReader::StaticClass, TEXT("ULowEntryBitDataReader"), &Z_Registration_Info_UClass_ULowEntryBitDataReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryBitDataReader), 2068090368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataReader_h_4109630632(TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataReader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
