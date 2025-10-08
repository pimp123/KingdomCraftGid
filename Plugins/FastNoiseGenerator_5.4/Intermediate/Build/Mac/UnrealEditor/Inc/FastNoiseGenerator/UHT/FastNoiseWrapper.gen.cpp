// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastNoiseGenerator/Public/FastNoiseWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastNoiseWrapper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper();
FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister();
FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction();
FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType();
FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType();
FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp();
FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType();
UPackage* Z_Construct_UPackage__Script_FastNoiseGenerator();
// End Cross Module References

// Begin Enum EFastNoise_NoiseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_NoiseType;
static UEnum* EFastNoise_NoiseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_NoiseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFastNoise_NoiseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, (UObject*)Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_NoiseType"));
	}
	return Z_Registration_Info_UEnum_EFastNoise_NoiseType.OuterSingleton;
}
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_NoiseType>()
{
	return EFastNoise_NoiseType_StaticEnum();
}
struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cellular.Name", "EFastNoise_NoiseType::Cellular" },
		{ "Comment", "// Fast Noise UE4 enum wrappers\n" },
		{ "Cubic.Name", "EFastNoise_NoiseType::Cubic" },
		{ "CubicFractal.Name", "EFastNoise_NoiseType::CubicFractal" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "Perlin.Name", "EFastNoise_NoiseType::Perlin" },
		{ "PerlinFractal.Name", "EFastNoise_NoiseType::PerlinFractal" },
		{ "Simplex.Name", "EFastNoise_NoiseType::Simplex" },
		{ "SimplexFractal.Name", "EFastNoise_NoiseType::SimplexFractal" },
		{ "ToolTip", "Fast Noise UE4 enum wrappers" },
		{ "Value.Name", "EFastNoise_NoiseType::Value" },
		{ "ValueFractal.Name", "EFastNoise_NoiseType::ValueFractal" },
		{ "WhiteNoise.Name", "EFastNoise_NoiseType::WhiteNoise" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFastNoise_NoiseType::Value", (int64)EFastNoise_NoiseType::Value },
		{ "EFastNoise_NoiseType::ValueFractal", (int64)EFastNoise_NoiseType::ValueFractal },
		{ "EFastNoise_NoiseType::Perlin", (int64)EFastNoise_NoiseType::Perlin },
		{ "EFastNoise_NoiseType::PerlinFractal", (int64)EFastNoise_NoiseType::PerlinFractal },
		{ "EFastNoise_NoiseType::Simplex", (int64)EFastNoise_NoiseType::Simplex },
		{ "EFastNoise_NoiseType::SimplexFractal", (int64)EFastNoise_NoiseType::SimplexFractal },
		{ "EFastNoise_NoiseType::Cellular", (int64)EFastNoise_NoiseType::Cellular },
		{ "EFastNoise_NoiseType::WhiteNoise", (int64)EFastNoise_NoiseType::WhiteNoise },
		{ "EFastNoise_NoiseType::Cubic", (int64)EFastNoise_NoiseType::Cubic },
		{ "EFastNoise_NoiseType::CubicFractal", (int64)EFastNoise_NoiseType::CubicFractal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	nullptr,
	"EFastNoise_NoiseType",
	"EFastNoise_NoiseType",
	Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_NoiseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_NoiseType.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFastNoise_NoiseType.InnerSingleton;
}
// End Enum EFastNoise_NoiseType

// Begin Enum EFastNoise_Interp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_Interp;
static UEnum* EFastNoise_Interp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_Interp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFastNoise_Interp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, (UObject*)Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_Interp"));
	}
	return Z_Registration_Info_UEnum_EFastNoise_Interp.OuterSingleton;
}
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_Interp>()
{
	return EFastNoise_Interp_StaticEnum();
}
struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hermite.Name", "EFastNoise_Interp::Hermite" },
		{ "Linear.Name", "EFastNoise_Interp::Linear" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "Quintic.Name", "EFastNoise_Interp::Quintic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFastNoise_Interp::Linear", (int64)EFastNoise_Interp::Linear },
		{ "EFastNoise_Interp::Hermite", (int64)EFastNoise_Interp::Hermite },
		{ "EFastNoise_Interp::Quintic", (int64)EFastNoise_Interp::Quintic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	nullptr,
	"EFastNoise_Interp",
	"EFastNoise_Interp",
	Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_Interp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_Interp.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFastNoise_Interp.InnerSingleton;
}
// End Enum EFastNoise_Interp

// Begin Enum EFastNoise_FractalType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_FractalType;
static UEnum* EFastNoise_FractalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_FractalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFastNoise_FractalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, (UObject*)Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_FractalType"));
	}
	return Z_Registration_Info_UEnum_EFastNoise_FractalType.OuterSingleton;
}
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_FractalType>()
{
	return EFastNoise_FractalType_StaticEnum();
}
struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Billow.Name", "EFastNoise_FractalType::Billow" },
		{ "BlueprintType", "true" },
		{ "FBM.Name", "EFastNoise_FractalType::FBM" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "RigidMulti.Name", "EFastNoise_FractalType::RigidMulti" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFastNoise_FractalType::FBM", (int64)EFastNoise_FractalType::FBM },
		{ "EFastNoise_FractalType::Billow", (int64)EFastNoise_FractalType::Billow },
		{ "EFastNoise_FractalType::RigidMulti", (int64)EFastNoise_FractalType::RigidMulti },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	nullptr,
	"EFastNoise_FractalType",
	"EFastNoise_FractalType",
	Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_FractalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_FractalType.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFastNoise_FractalType.InnerSingleton;
}
// End Enum EFastNoise_FractalType

// Begin Enum EFastNoise_CellularDistanceFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction;
static UEnum* EFastNoise_CellularDistanceFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, (UObject*)Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_CellularDistanceFunction"));
	}
	return Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.OuterSingleton;
}
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularDistanceFunction>()
{
	return EFastNoise_CellularDistanceFunction_StaticEnum();
}
struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Euclidean.Name", "EFastNoise_CellularDistanceFunction::Euclidean" },
		{ "Manhattan.Name", "EFastNoise_CellularDistanceFunction::Manhattan" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "Natural.Name", "EFastNoise_CellularDistanceFunction::Natural" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFastNoise_CellularDistanceFunction::Euclidean", (int64)EFastNoise_CellularDistanceFunction::Euclidean },
		{ "EFastNoise_CellularDistanceFunction::Manhattan", (int64)EFastNoise_CellularDistanceFunction::Manhattan },
		{ "EFastNoise_CellularDistanceFunction::Natural", (int64)EFastNoise_CellularDistanceFunction::Natural },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	nullptr,
	"EFastNoise_CellularDistanceFunction",
	"EFastNoise_CellularDistanceFunction",
	Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.InnerSingleton;
}
// End Enum EFastNoise_CellularDistanceFunction

// Begin Enum EFastNoise_CellularReturnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_CellularReturnType;
static UEnum* EFastNoise_CellularReturnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, (UObject*)Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_CellularReturnType"));
	}
	return Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.OuterSingleton;
}
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularReturnType>()
{
	return EFastNoise_CellularReturnType_StaticEnum();
}
struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CellValue.Name", "EFastNoise_CellularReturnType::CellValue" },
		{ "Distance.Comment", "/*NoiseLookup,*/" },
		{ "Distance.Name", "EFastNoise_CellularReturnType::Distance" },
		{ "Distance.ToolTip", "NoiseLookup," },
		{ "Distance2.Name", "EFastNoise_CellularReturnType::Distance2" },
		{ "Distance2Add.Name", "EFastNoise_CellularReturnType::Distance2Add" },
		{ "Distance2Div.Name", "EFastNoise_CellularReturnType::Distance2Div" },
		{ "Distance2Mul.Name", "EFastNoise_CellularReturnType::Distance2Mul" },
		{ "Distance2Sub.Name", "EFastNoise_CellularReturnType::Distance2Sub" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFastNoise_CellularReturnType::CellValue", (int64)EFastNoise_CellularReturnType::CellValue },
		{ "EFastNoise_CellularReturnType::Distance", (int64)EFastNoise_CellularReturnType::Distance },
		{ "EFastNoise_CellularReturnType::Distance2", (int64)EFastNoise_CellularReturnType::Distance2 },
		{ "EFastNoise_CellularReturnType::Distance2Add", (int64)EFastNoise_CellularReturnType::Distance2Add },
		{ "EFastNoise_CellularReturnType::Distance2Sub", (int64)EFastNoise_CellularReturnType::Distance2Sub },
		{ "EFastNoise_CellularReturnType::Distance2Mul", (int64)EFastNoise_CellularReturnType::Distance2Mul },
		{ "EFastNoise_CellularReturnType::Distance2Div", (int64)EFastNoise_CellularReturnType::Distance2Div },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	nullptr,
	"EFastNoise_CellularReturnType",
	"EFastNoise_CellularReturnType",
	Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType()
{
	if (!Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.InnerSingleton;
}
// End Enum EFastNoise_CellularReturnType

// Begin Class UFastNoiseWrapper Function GetCellularJitter
struct Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics
{
	struct FastNoiseWrapper_eventGetCellularJitter_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular jitter. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular jitter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetCellularJitter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetCellularJitter", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FastNoiseWrapper_eventGetCellularJitter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FastNoiseWrapper_eventGetCellularJitter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetCellularJitter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCellularJitter();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetCellularJitter

// Begin Class UFastNoiseWrapper Function GetDistanceFunction
struct Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics
{
	struct FastNoiseWrapper_eventGetDistanceFunction_Parms
	{
		EFastNoise_CellularDistanceFunction ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular distance function. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular distance function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetDistanceFunction_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(0, nullptr) }; // 809363650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetDistanceFunction", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FastNoiseWrapper_eventGetDistanceFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FastNoiseWrapper_eventGetDistanceFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetDistanceFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFastNoise_CellularDistanceFunction*)Z_Param__Result=P_THIS->GetDistanceFunction();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetDistanceFunction

// Begin Class UFastNoiseWrapper Function GetFractalType
struct Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics
{
	struct FastNoiseWrapper_eventGetFractalType_Parms
	{
		EFastNoise_FractalType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetFractalType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(0, nullptr) }; // 3385377436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetFractalType", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FastNoiseWrapper_eventGetFractalType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FastNoiseWrapper_eventGetFractalType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetFractalType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFastNoise_FractalType*)Z_Param__Result=P_THIS->GetFractalType();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetFractalType

// Begin Class UFastNoiseWrapper Function GetFrequency
struct Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics
{
	struct FastNoiseWrapper_eventGetFrequency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets frequency. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets frequency." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetFrequency", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FastNoiseWrapper_eventGetFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FastNoiseWrapper_eventGetFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrequency();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetFrequency

// Begin Class UFastNoiseWrapper Function GetGain
struct Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics
{
	struct FastNoiseWrapper_eventGetGain_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal gain. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal gain." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetGain_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetGain", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FastNoiseWrapper_eventGetGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FastNoiseWrapper_eventGetGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetGain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGain();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetGain

// Begin Class UFastNoiseWrapper Function GetInterpolation
struct Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics
{
	struct FastNoiseWrapper_eventGetInterpolation_Parms
	{
		EFastNoise_Interp ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets interpolation type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets interpolation type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetInterpolation_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(0, nullptr) }; // 2320761411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetInterpolation", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FastNoiseWrapper_eventGetInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FastNoiseWrapper_eventGetInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetInterpolation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFastNoise_Interp*)Z_Param__Result=P_THIS->GetInterpolation();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetInterpolation

// Begin Class UFastNoiseWrapper Function GetLacunarity
struct Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics
{
	struct FastNoiseWrapper_eventGetLacunarity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal lacunarity. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal lacunarity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetLacunarity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetLacunarity", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FastNoiseWrapper_eventGetLacunarity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FastNoiseWrapper_eventGetLacunarity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetLacunarity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLacunarity();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetLacunarity

// Begin Class UFastNoiseWrapper Function GetNoise2D
struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics
{
	struct FastNoiseWrapper_eventGetNoise2D_Parms
	{
		float x;
		float y;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x and y values\n\x09*\n\x09* @param x\x09- The x axis value\n\x09* @param y\x09- The y axis value\n\x09*/" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x and y values\n\n@param x      - The x axis value\n@param y      - The y axis value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoise2D", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FastNoiseWrapper_eventGetNoise2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FastNoiseWrapper_eventGetNoise2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoise2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNoise2D(Z_Param_x,Z_Param_y);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetNoise2D

// Begin Class UFastNoiseWrapper Function GetNoise3D
struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics
{
	struct FastNoiseWrapper_eventGetNoise3D_Parms
	{
		float x;
		float y;
		float z;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x, y and z values\n\x09*\n\x09* @param x\x09- The x axis value\n\x09* @param y\x09- The y axis value\n\x09* @param z\x09- The z axis value\n\x09*/" },
		{ "CPP_Default_z", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x, y and z values\n\n@param x      - The x axis value\n@param y      - The y axis value\n@param z      - The z axis value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoise3D", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FastNoiseWrapper_eventGetNoise3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FastNoiseWrapper_eventGetNoise3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoise3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNoise3D(Z_Param_x,Z_Param_y,Z_Param_z);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetNoise3D

// Begin Class UFastNoiseWrapper Function GetNoiseType
struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics
{
	struct FastNoiseWrapper_eventGetNoiseType_Parms
	{
		EFastNoise_NoiseType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets noise type */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets noise type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoiseType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(0, nullptr) }; // 2123723459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoiseType", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FastNoiseWrapper_eventGetNoiseType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FastNoiseWrapper_eventGetNoiseType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoiseType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFastNoise_NoiseType*)Z_Param__Result=P_THIS->GetNoiseType();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetNoiseType

// Begin Class UFastNoiseWrapper Function GetOctaves
struct Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics
{
	struct FastNoiseWrapper_eventGetOctaves_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal octaves. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal octaves." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetOctaves_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetOctaves", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FastNoiseWrapper_eventGetOctaves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FastNoiseWrapper_eventGetOctaves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetOctaves)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOctaves();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetOctaves

// Begin Class UFastNoiseWrapper Function GetReturnType
struct Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics
{
	struct FastNoiseWrapper_eventGetReturnType_Parms
	{
		EFastNoise_CellularReturnType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular return type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular return type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetReturnType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(0, nullptr) }; // 945085634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetReturnType", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FastNoiseWrapper_eventGetReturnType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FastNoiseWrapper_eventGetReturnType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetReturnType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFastNoise_CellularReturnType*)Z_Param__Result=P_THIS->GetReturnType();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetReturnType

// Begin Class UFastNoiseWrapper Function GetSeed
struct Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics
{
	struct FastNoiseWrapper_eventGetSeed_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets seed. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets seed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetSeed", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FastNoiseWrapper_eventGetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FastNoiseWrapper_eventGetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execGetSeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSeed();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function GetSeed

// Begin Class UFastNoiseWrapper Function IsInitialized
struct Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics
{
	struct FastNoiseWrapper_eventIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/** Returns if Fast Noise properties are initialized or not */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns if Fast Noise properties are initialized or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FastNoiseWrapper_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FastNoiseWrapper_eventIsInitialized_Parms), &Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "IsInitialized", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FastNoiseWrapper_eventIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FastNoiseWrapper_eventIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitialized();
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function IsInitialized

// Begin Class UFastNoiseWrapper Function SetCellularJitter
struct Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics
{
	struct FastNoiseWrapper_eventSetCellularJitter_Parms
	{
		float cellularJitter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular jitter. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular jitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetCellularJitter_Parms, cellularJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cellularJitter_MetaData), NewProp_cellularJitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetCellularJitter", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FastNoiseWrapper_eventSetCellularJitter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FastNoiseWrapper_eventSetCellularJitter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetCellularJitter)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCellularJitter(Z_Param_cellularJitter);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetCellularJitter

// Begin Class UFastNoiseWrapper Function SetDistanceFunction
struct Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics
{
	struct FastNoiseWrapper_eventSetDistanceFunction_Parms
	{
		EFastNoise_CellularDistanceFunction distanceFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular distance function. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular distance function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetDistanceFunction_Parms, distanceFunction), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distanceFunction_MetaData), NewProp_distanceFunction_MetaData) }; // 809363650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetDistanceFunction", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FastNoiseWrapper_eventSetDistanceFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FastNoiseWrapper_eventSetDistanceFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetDistanceFunction)
{
	P_GET_ENUM(EFastNoise_CellularDistanceFunction,Z_Param_distanceFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistanceFunction(EFastNoise_CellularDistanceFunction(Z_Param_distanceFunction));
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetDistanceFunction

// Begin Class UFastNoiseWrapper Function SetFractalType
struct Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics
{
	struct FastNoiseWrapper_eventSetFractalType_Parms
	{
		EFastNoise_FractalType fractalType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fractalType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_fractalType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType = { "fractalType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetFractalType_Parms, fractalType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fractalType_MetaData), NewProp_fractalType_MetaData) }; // 3385377436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetFractalType", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FastNoiseWrapper_eventSetFractalType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FastNoiseWrapper_eventSetFractalType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetFractalType)
{
	P_GET_ENUM(EFastNoise_FractalType,Z_Param_fractalType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFractalType(EFastNoise_FractalType(Z_Param_fractalType));
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetFractalType

// Begin Class UFastNoiseWrapper Function SetFrequency
struct Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics
{
	struct FastNoiseWrapper_eventSetFrequency_Parms
	{
		float frequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set frequency. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set frequency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetFrequency_Parms, frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frequency_MetaData), NewProp_frequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetFrequency", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FastNoiseWrapper_eventSetFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FastNoiseWrapper_eventSetFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequency(Z_Param_frequency);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetFrequency

// Begin Class UFastNoiseWrapper Function SetGain
struct Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics
{
	struct FastNoiseWrapper_eventSetGain_Parms
	{
		float gain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal gain. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal gain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetGain_Parms, gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gain_MetaData), NewProp_gain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetGain", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FastNoiseWrapper_eventSetGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FastNoiseWrapper_eventSetGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGain(Z_Param_gain);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetGain

// Begin Class UFastNoiseWrapper Function SetInterpolation
struct Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics
{
	struct FastNoiseWrapper_eventSetInterpolation_Parms
	{
		EFastNoise_Interp interp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set interpolation type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set interpolation type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_interp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_interp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetInterpolation_Parms, interp), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interp_MetaData), NewProp_interp_MetaData) }; // 2320761411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetInterpolation", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FastNoiseWrapper_eventSetInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FastNoiseWrapper_eventSetInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetInterpolation)
{
	P_GET_ENUM(EFastNoise_Interp,Z_Param_interp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInterpolation(EFastNoise_Interp(Z_Param_interp));
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetInterpolation

// Begin Class UFastNoiseWrapper Function SetLacunarity
struct Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics
{
	struct FastNoiseWrapper_eventSetLacunarity_Parms
	{
		float lacunarity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal lacunarity. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal lacunarity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetLacunarity_Parms, lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lacunarity_MetaData), NewProp_lacunarity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetLacunarity", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FastNoiseWrapper_eventSetLacunarity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FastNoiseWrapper_eventSetLacunarity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetLacunarity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLacunarity(Z_Param_lacunarity);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetLacunarity

// Begin Class UFastNoiseWrapper Function SetNoiseType
struct Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics
{
	struct FastNoiseWrapper_eventSetNoiseType_Parms
	{
		EFastNoise_NoiseType noiseType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set noise type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set noise type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_noiseType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetNoiseType_Parms, noiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noiseType_MetaData), NewProp_noiseType_MetaData) }; // 2123723459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetNoiseType", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FastNoiseWrapper_eventSetNoiseType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FastNoiseWrapper_eventSetNoiseType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetNoiseType)
{
	P_GET_ENUM(EFastNoise_NoiseType,Z_Param_noiseType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNoiseType(EFastNoise_NoiseType(Z_Param_noiseType));
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetNoiseType

// Begin Class UFastNoiseWrapper Function SetOctaves
struct Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics
{
	struct FastNoiseWrapper_eventSetOctaves_Parms
	{
		int32 octaves;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal octaves. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal octaves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetOctaves_Parms, octaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_octaves_MetaData), NewProp_octaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetOctaves", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FastNoiseWrapper_eventSetOctaves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FastNoiseWrapper_eventSetOctaves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetOctaves)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOctaves(Z_Param_octaves);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetOctaves

// Begin Class UFastNoiseWrapper Function SetReturnType
struct Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics
{
	struct FastNoiseWrapper_eventSetReturnType_Parms
	{
		EFastNoise_CellularReturnType cellularReturnType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular return type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular return type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetReturnType_Parms, cellularReturnType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cellularReturnType_MetaData), NewProp_cellularReturnType_MetaData) }; // 945085634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetReturnType", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FastNoiseWrapper_eventSetReturnType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FastNoiseWrapper_eventSetReturnType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetReturnType)
{
	P_GET_ENUM(EFastNoise_CellularReturnType,Z_Param_cellularReturnType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReturnType(EFastNoise_CellularReturnType(Z_Param_cellularReturnType));
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetReturnType

// Begin Class UFastNoiseWrapper Function SetSeed
struct Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics
{
	struct FastNoiseWrapper_eventSetSeed_Parms
	{
		int32 seed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set seed. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetSeed_Parms, seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seed_MetaData), NewProp_seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetSeed", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FastNoiseWrapper_eventSetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FastNoiseWrapper_eventSetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetSeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSeed(Z_Param_seed);
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetSeed

// Begin Class UFastNoiseWrapper Function SetupFastNoise
struct Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics
{
	struct FastNoiseWrapper_eventSetupFastNoise_Parms
	{
		EFastNoise_NoiseType noiseType;
		int32 seed;
		float frequency;
		EFastNoise_Interp interp;
		EFastNoise_FractalType fractaltype;
		int32 octaves;
		float lacunarity;
		float gain;
		float cellularJitter;
		EFastNoise_CellularDistanceFunction cellularDistanceFunction;
		EFastNoise_CellularReturnType cellularReturnType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Set all the properties needed to generate the noise\n\x09*\n\x09* @param noiseType\x09\x09\x09\x09\x09- Noise return type of GetNoise(...). Default value: Simplex\n\x09* @param seed\x09\x09\x09\x09\x09\x09- Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1337\n\x09* @param frequency\x09\x09\x09\x09\x09- Frequency for all noise types, except White Noise. Affects how coarse the noise output is. Default value: 0.01\n\x09* @param interp\x09\x09\x09\x09\x09\x09- Interpolation method used to smooth between noise values in Value and Perlin Noise. Possible interpolation methods (lowest to highest quality): Linear; Hermite; Quintic. Default value: Quintic\n\x09* @param fractaltype\x09\x09\x09\x09- Method for combining octaves in all fractal noise types. Default value: FBM\n\x09* @param octaves\x09\x09\x09\x09\x09- Octave count for all fractal noise types. The amount of noise layers used to create the fractal. Default value: 3\n\x09* @param lacunarity\x09\x09\x09\x09\x09- Octave lacunarity for all fractal noise types. The frequency multiplier between each octave. Default value: 2.0\n\x09* @param gain\x09\x09\x09\x09\x09\x09- Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last. Default value: 0.5\n\x09* @param cellularJitter\x09\x09\x09\x09- Maximum distance a cellular point can move from its grid position. Setting this high will make artifacts more common. Default value: 0.45\n\x09* @param cellularDistanceFunction\x09- Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point. Natural is a blend of Euclidean and Manhattan to give curved cell boundaries. Default value: Euclidean\n\x09* @param cellularReturnType\x09\x09\x09- Return type from cellular noise calculations. Default value: CellValue\n\x09*/" },
		{ "CPP_Default_cellularDistanceFunction", "Euclidean" },
		{ "CPP_Default_cellularJitter", "0.450000" },
		{ "CPP_Default_cellularReturnType", "CellValue" },
		{ "CPP_Default_fractaltype", "FBM" },
		{ "CPP_Default_frequency", "0.010000" },
		{ "CPP_Default_gain", "0.500000" },
		{ "CPP_Default_interp", "Quintic" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_noiseType", "Simplex" },
		{ "CPP_Default_octaves", "3" },
		{ "CPP_Default_seed", "1337" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set all the properties needed to generate the noise\n\n@param noiseType                                      - Noise return type of GetNoise(...). Default value: Simplex\n@param seed                                           - Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1337\n@param frequency                                      - Frequency for all noise types, except White Noise. Affects how coarse the noise output is. Default value: 0.01\n@param interp                                         - Interpolation method used to smooth between noise values in Value and Perlin Noise. Possible interpolation methods (lowest to highest quality): Linear; Hermite; Quintic. Default value: Quintic\n@param fractaltype                            - Method for combining octaves in all fractal noise types. Default value: FBM\n@param octaves                                        - Octave count for all fractal noise types. The amount of noise layers used to create the fractal. Default value: 3\n@param lacunarity                                     - Octave lacunarity for all fractal noise types. The frequency multiplier between each octave. Default value: 2.0\n@param gain                                           - Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last. Default value: 0.5\n@param cellularJitter                         - Maximum distance a cellular point can move from its grid position. Setting this high will make artifacts more common. Default value: 0.45\n@param cellularDistanceFunction       - Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point. Natural is a blend of Euclidean and Manhattan to give curved cell boundaries. Default value: Euclidean\n@param cellularReturnType                     - Return type from cellular noise calculations. Default value: CellValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interp_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fractaltype_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cellularDistanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_noiseType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_interp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_interp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_fractaltype_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_fractaltype;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, noiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noiseType_MetaData), NewProp_noiseType_MetaData) }; // 2123723459
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seed_MetaData), NewProp_seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frequency_MetaData), NewProp_frequency_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, interp), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interp_MetaData), NewProp_interp_MetaData) }; // 2320761411
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype = { "fractaltype", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, fractaltype), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fractaltype_MetaData), NewProp_fractaltype_MetaData) }; // 3385377436
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, octaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_octaves_MetaData), NewProp_octaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lacunarity_MetaData), NewProp_lacunarity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gain_MetaData), NewProp_gain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cellularJitter_MetaData), NewProp_cellularJitter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction = { "cellularDistanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularDistanceFunction), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cellularDistanceFunction_MetaData), NewProp_cellularDistanceFunction_MetaData) }; // 809363650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularReturnType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cellularReturnType_MetaData), NewProp_cellularReturnType_MetaData) }; // 945085634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetupFastNoise", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FastNoiseWrapper_eventSetupFastNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FastNoiseWrapper_eventSetupFastNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseWrapper::execSetupFastNoise)
{
	P_GET_ENUM(EFastNoise_NoiseType,Z_Param_noiseType);
	P_GET_PROPERTY(FIntProperty,Z_Param_seed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
	P_GET_ENUM(EFastNoise_Interp,Z_Param_interp);
	P_GET_ENUM(EFastNoise_FractalType,Z_Param_fractaltype);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
	P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
	P_GET_ENUM(EFastNoise_CellularDistanceFunction,Z_Param_cellularDistanceFunction);
	P_GET_ENUM(EFastNoise_CellularReturnType,Z_Param_cellularReturnType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupFastNoise(EFastNoise_NoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,EFastNoise_Interp(Z_Param_interp),EFastNoise_FractalType(Z_Param_fractaltype),Z_Param_octaves,Z_Param_lacunarity,Z_Param_gain,Z_Param_cellularJitter,EFastNoise_CellularDistanceFunction(Z_Param_cellularDistanceFunction),EFastNoise_CellularReturnType(Z_Param_cellularReturnType));
	P_NATIVE_END;
}
// End Class UFastNoiseWrapper Function SetupFastNoise

// Begin Class UFastNoiseWrapper
void UFastNoiseWrapper::StaticRegisterNativesUFastNoiseWrapper()
{
	UClass* Class = UFastNoiseWrapper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCellularJitter", &UFastNoiseWrapper::execGetCellularJitter },
		{ "GetDistanceFunction", &UFastNoiseWrapper::execGetDistanceFunction },
		{ "GetFractalType", &UFastNoiseWrapper::execGetFractalType },
		{ "GetFrequency", &UFastNoiseWrapper::execGetFrequency },
		{ "GetGain", &UFastNoiseWrapper::execGetGain },
		{ "GetInterpolation", &UFastNoiseWrapper::execGetInterpolation },
		{ "GetLacunarity", &UFastNoiseWrapper::execGetLacunarity },
		{ "GetNoise2D", &UFastNoiseWrapper::execGetNoise2D },
		{ "GetNoise3D", &UFastNoiseWrapper::execGetNoise3D },
		{ "GetNoiseType", &UFastNoiseWrapper::execGetNoiseType },
		{ "GetOctaves", &UFastNoiseWrapper::execGetOctaves },
		{ "GetReturnType", &UFastNoiseWrapper::execGetReturnType },
		{ "GetSeed", &UFastNoiseWrapper::execGetSeed },
		{ "IsInitialized", &UFastNoiseWrapper::execIsInitialized },
		{ "SetCellularJitter", &UFastNoiseWrapper::execSetCellularJitter },
		{ "SetDistanceFunction", &UFastNoiseWrapper::execSetDistanceFunction },
		{ "SetFractalType", &UFastNoiseWrapper::execSetFractalType },
		{ "SetFrequency", &UFastNoiseWrapper::execSetFrequency },
		{ "SetGain", &UFastNoiseWrapper::execSetGain },
		{ "SetInterpolation", &UFastNoiseWrapper::execSetInterpolation },
		{ "SetLacunarity", &UFastNoiseWrapper::execSetLacunarity },
		{ "SetNoiseType", &UFastNoiseWrapper::execSetNoiseType },
		{ "SetOctaves", &UFastNoiseWrapper::execSetOctaves },
		{ "SetReturnType", &UFastNoiseWrapper::execSetReturnType },
		{ "SetSeed", &UFastNoiseWrapper::execSetSeed },
		{ "SetupFastNoise", &UFastNoiseWrapper::execSetupFastNoise },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFastNoiseWrapper);
UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister()
{
	return UFastNoiseWrapper::StaticClass();
}
struct Z_Construct_UClass_UFastNoiseWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UE4 Wrapper for Auburns's FastNoise library, also available for blueprints usage.\n */" },
		{ "IncludePath", "FastNoiseWrapper.h" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "UE4 Wrapper for Auburns's FastNoise library, also available for blueprints usage." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter, "GetCellularJitter" }, // 1803247474
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction, "GetDistanceFunction" }, // 1544813614
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType, "GetFractalType" }, // 684939437
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency, "GetFrequency" }, // 837701179
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetGain, "GetGain" }, // 4177489748
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation, "GetInterpolation" }, // 2412066052
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity, "GetLacunarity" }, // 3649684706
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D, "GetNoise2D" }, // 4114220122
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D, "GetNoise3D" }, // 2081856254
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType, "GetNoiseType" }, // 1914553135
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves, "GetOctaves" }, // 3313465815
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType, "GetReturnType" }, // 4272480493
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetSeed, "GetSeed" }, // 2339623939
		{ &Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized, "IsInitialized" }, // 1707264450
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter, "SetCellularJitter" }, // 1771202170
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction, "SetDistanceFunction" }, // 3070288901
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType, "SetFractalType" }, // 1742888642
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency, "SetFrequency" }, // 3894104878
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetGain, "SetGain" }, // 743436931
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation, "SetInterpolation" }, // 2828083254
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity, "SetLacunarity" }, // 3964410239
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType, "SetNoiseType" }, // 717504570
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves, "SetOctaves" }, // 1877987596
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType, "SetReturnType" }, // 3506243931
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetSeed, "SetSeed" }, // 3029244326
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise, "SetupFastNoise" }, // 447911997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFastNoiseWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFastNoiseWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFastNoiseWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFastNoiseWrapper_Statics::ClassParams = {
	&UFastNoiseWrapper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFastNoiseWrapper()
{
	if (!Z_Registration_Info_UClass_UFastNoiseWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFastNoiseWrapper.OuterSingleton, Z_Construct_UClass_UFastNoiseWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFastNoiseWrapper.OuterSingleton;
}
template<> FASTNOISEGENERATOR_API UClass* StaticClass<UFastNoiseWrapper>()
{
	return UFastNoiseWrapper::StaticClass();
}
UFastNoiseWrapper::UFastNoiseWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFastNoiseWrapper);
UFastNoiseWrapper::~UFastNoiseWrapper() {}
// End Class UFastNoiseWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFastNoise_NoiseType_StaticEnum, TEXT("EFastNoise_NoiseType"), &Z_Registration_Info_UEnum_EFastNoise_NoiseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123723459U) },
		{ EFastNoise_Interp_StaticEnum, TEXT("EFastNoise_Interp"), &Z_Registration_Info_UEnum_EFastNoise_Interp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2320761411U) },
		{ EFastNoise_FractalType_StaticEnum, TEXT("EFastNoise_FractalType"), &Z_Registration_Info_UEnum_EFastNoise_FractalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3385377436U) },
		{ EFastNoise_CellularDistanceFunction_StaticEnum, TEXT("EFastNoise_CellularDistanceFunction"), &Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 809363650U) },
		{ EFastNoise_CellularReturnType_StaticEnum, TEXT("EFastNoise_CellularReturnType"), &Z_Registration_Info_UEnum_EFastNoise_CellularReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 945085634U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFastNoiseWrapper, UFastNoiseWrapper::StaticClass, TEXT("UFastNoiseWrapper"), &Z_Registration_Info_UClass_UFastNoiseWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFastNoiseWrapper), 2176591669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_83001999(TEXT("/Script/FastNoiseGenerator"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
