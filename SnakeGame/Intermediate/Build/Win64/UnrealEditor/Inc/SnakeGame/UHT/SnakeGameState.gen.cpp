// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameState();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameState_NoRegister();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_ESnakeAgent1();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_ESnakeAgent2();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_ESnakeGameType();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Enum ESnakeGameType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnakeGameType;
static UEnum* ESnakeGameType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnakeGameType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnakeGameType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_ESnakeGameType, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("ESnakeGameType"));
	}
	return Z_Registration_Info_UEnum_ESnakeGameType.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakeGameType>()
{
	return ESnakeGameType_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battle.Name", "ESnakeGameType::Battle" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SnakeGameState.h" },
		{ "Team.Name", "ESnakeGameType::Team" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnakeGameType::Team", (int64)ESnakeGameType::Team },
		{ "ESnakeGameType::Battle", (int64)ESnakeGameType::Battle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"ESnakeGameType",
	"ESnakeGameType",
	Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_ESnakeGameType()
{
	if (!Z_Registration_Info_UEnum_ESnakeGameType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnakeGameType.InnerSingleton, Z_Construct_UEnum_SnakeGame_ESnakeGameType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnakeGameType.InnerSingleton;
}
// End Enum ESnakeGameType

// Begin Enum ESnakeAgent1
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnakeAgent1;
static UEnum* ESnakeAgent1_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnakeAgent1.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnakeAgent1.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_ESnakeAgent1, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("ESnakeAgent1"));
	}
	return Z_Registration_Info_UEnum_ESnakeAgent1.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakeAgent1>()
{
	return ESnakeAgent1_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bot.Name", "ESnakeAgent1::Bot" },
		{ "ModuleRelativePath", "SnakeGameState.h" },
		{ "Player.Name", "ESnakeAgent1::Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnakeAgent1::Player", (int64)ESnakeAgent1::Player },
		{ "ESnakeAgent1::Bot", (int64)ESnakeAgent1::Bot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"ESnakeAgent1",
	"ESnakeAgent1",
	Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_ESnakeAgent1()
{
	if (!Z_Registration_Info_UEnum_ESnakeAgent1.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnakeAgent1.InnerSingleton, Z_Construct_UEnum_SnakeGame_ESnakeAgent1_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnakeAgent1.InnerSingleton;
}
// End Enum ESnakeAgent1

// Begin Enum ESnakeAgent2
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnakeAgent2;
static UEnum* ESnakeAgent2_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnakeAgent2.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnakeAgent2.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_ESnakeAgent2, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("ESnakeAgent2"));
	}
	return Z_Registration_Info_UEnum_ESnakeAgent2.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakeAgent2>()
{
	return ESnakeAgent2_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bot.Name", "ESnakeAgent2::Bot" },
		{ "ModuleRelativePath", "SnakeGameState.h" },
		{ "None.Name", "ESnakeAgent2::None" },
		{ "Player.Name", "ESnakeAgent2::Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnakeAgent2::None", (int64)ESnakeAgent2::None },
		{ "ESnakeAgent2::Player", (int64)ESnakeAgent2::Player },
		{ "ESnakeAgent2::Bot", (int64)ESnakeAgent2::Bot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"ESnakeAgent2",
	"ESnakeAgent2",
	Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_ESnakeAgent2()
{
	if (!Z_Registration_Info_UEnum_ESnakeAgent2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnakeAgent2.InnerSingleton, Z_Construct_UEnum_SnakeGame_ESnakeAgent2_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnakeAgent2.InnerSingleton;
}
// End Enum ESnakeAgent2

// Begin Class ASnakeGameState Function GetSnakeGameType
struct Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics
{
	struct SnakeGameState_eventGetSnakeGameType_Parms
	{
		ESnakeGameType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeGameState_eventGetSnakeGameType_Parms, ReturnValue), Z_Construct_UEnum_SnakeGame_ESnakeGameType, METADATA_PARAMS(0, nullptr) }; // 3711832621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeGameState, nullptr, "GetSnakeGameType", nullptr, nullptr, Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::SnakeGameState_eventGetSnakeGameType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::SnakeGameState_eventGetSnakeGameType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakeGameState::execGetSnakeGameType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESnakeGameType*)Z_Param__Result=P_THIS->GetSnakeGameType();
	P_NATIVE_END;
}
// End Class ASnakeGameState Function GetSnakeGameType

// Begin Class ASnakeGameState Function SetSnakeGameType
struct Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics
{
	struct SnakeGameState_eventSetSnakeGameType_Parms
	{
		ESnakeGameType InSnakeGameType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSnakeGameType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSnakeGameType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::NewProp_InSnakeGameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::NewProp_InSnakeGameType = { "InSnakeGameType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeGameState_eventSetSnakeGameType_Parms, InSnakeGameType), Z_Construct_UEnum_SnakeGame_ESnakeGameType, METADATA_PARAMS(0, nullptr) }; // 3711832621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::NewProp_InSnakeGameType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::NewProp_InSnakeGameType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeGameState, nullptr, "SetSnakeGameType", nullptr, nullptr, Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::SnakeGameState_eventSetSnakeGameType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::SnakeGameState_eventSetSnakeGameType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakeGameState::execSetSnakeGameType)
{
	P_GET_ENUM(ESnakeGameType,Z_Param_InSnakeGameType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSnakeGameType(ESnakeGameType(Z_Param_InSnakeGameType));
	P_NATIVE_END;
}
// End Class ASnakeGameState Function SetSnakeGameType

// Begin Class ASnakeGameState
void ASnakeGameState::StaticRegisterNativesASnakeGameState()
{
	UClass* Class = ASnakeGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSnakeGameType", &ASnakeGameState::execGetSnakeGameType },
		{ "SetSnakeGameType", &ASnakeGameState::execSetSnakeGameType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeGameState);
UClass* Z_Construct_UClass_ASnakeGameState_NoRegister()
{
	return ASnakeGameState::StaticClass();
}
struct Z_Construct_UClass_ASnakeGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakeGameState.h" },
		{ "ModuleRelativePath", "SnakeGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeGameType_MetaData[] = {
		{ "ModuleRelativePath", "SnakeGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeAgent1_MetaData[] = {
		{ "ModuleRelativePath", "SnakeGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeAgent2_MetaData[] = {
		{ "ModuleRelativePath", "SnakeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnakeGameType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnakeGameType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnakeAgent1_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnakeAgent1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnakeAgent2_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnakeAgent2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeGameState_GetSnakeGameType, "GetSnakeGameType" }, // 2597710269
		{ &Z_Construct_UFunction_ASnakeGameState_SetSnakeGameType, "SetSnakeGameType" }, // 821631265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeGameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeGameType = { "SnakeGameType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeGameState, SnakeGameType), Z_Construct_UEnum_SnakeGame_ESnakeGameType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeGameType_MetaData), NewProp_SnakeGameType_MetaData) }; // 3711832621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent1 = { "SnakeAgent1", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeGameState, SnakeAgent1), Z_Construct_UEnum_SnakeGame_ESnakeAgent1, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeAgent1_MetaData), NewProp_SnakeAgent1_MetaData) }; // 3358361957
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent2 = { "SnakeAgent2", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeGameState, SnakeAgent2), Z_Construct_UEnum_SnakeGame_ESnakeAgent2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeAgent2_MetaData), NewProp_SnakeAgent2_MetaData) }; // 3148278401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeGameType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeGameType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent1_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent2_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakeAgent2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameState_Statics::ClassParams = {
	&ASnakeGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASnakeGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeGameState()
{
	if (!Z_Registration_Info_UClass_ASnakeGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeGameState.OuterSingleton, Z_Construct_UClass_ASnakeGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeGameState.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeGameState>()
{
	return ASnakeGameState::StaticClass();
}
ASnakeGameState::ASnakeGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameState);
ASnakeGameState::~ASnakeGameState() {}
// End Class ASnakeGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESnakeGameType_StaticEnum, TEXT("ESnakeGameType"), &Z_Registration_Info_UEnum_ESnakeGameType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3711832621U) },
		{ ESnakeAgent1_StaticEnum, TEXT("ESnakeAgent1"), &Z_Registration_Info_UEnum_ESnakeAgent1, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3358361957U) },
		{ ESnakeAgent2_StaticEnum, TEXT("ESnakeAgent2"), &Z_Registration_Info_UEnum_ESnakeAgent2, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3148278401U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeGameState, ASnakeGameState::StaticClass, TEXT("ASnakeGameState"), &Z_Registration_Info_UClass_ASnakeGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeGameState), 572778687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_1422493965(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
