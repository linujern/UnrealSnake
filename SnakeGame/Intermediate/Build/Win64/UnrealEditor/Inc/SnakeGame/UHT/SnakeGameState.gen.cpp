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
ENGINE_API UClass* Z_Construct_UClass_AGameState();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameState();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameState_NoRegister();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_ESnakePlayMode();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Enum ESnakePlayMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnakePlayMode;
static UEnum* ESnakePlayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnakePlayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnakePlayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_ESnakePlayMode, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("ESnakePlayMode"));
	}
	return Z_Registration_Info_UEnum_ESnakePlayMode.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakePlayMode>()
{
	return ESnakePlayMode_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battle.Name", "ESnakePlayMode::Battle" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SnakeGameState.h" },
		{ "Team.Name", "ESnakePlayMode::Team" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnakePlayMode::Team", (int64)ESnakePlayMode::Team },
		{ "ESnakePlayMode::Battle", (int64)ESnakePlayMode::Battle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"ESnakePlayMode",
	"ESnakePlayMode",
	Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_ESnakePlayMode()
{
	if (!Z_Registration_Info_UEnum_ESnakePlayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnakePlayMode.InnerSingleton, Z_Construct_UEnum_SnakeGame_ESnakePlayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnakePlayMode.InnerSingleton;
}
// End Enum ESnakePlayMode

// Begin Class ASnakeGameState Function GetSnakePlayMode
struct Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics
{
	struct SnakeGameState_eventGetSnakePlayMode_Parms
	{
		ESnakePlayMode ReturnValue;
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeGameState_eventGetSnakePlayMode_Parms, ReturnValue), Z_Construct_UEnum_SnakeGame_ESnakePlayMode, METADATA_PARAMS(0, nullptr) }; // 3830163478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeGameState, nullptr, "GetSnakePlayMode", nullptr, nullptr, Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::SnakeGameState_eventGetSnakePlayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::SnakeGameState_eventGetSnakePlayMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakeGameState::execGetSnakePlayMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESnakePlayMode*)Z_Param__Result=P_THIS->GetSnakePlayMode();
	P_NATIVE_END;
}
// End Class ASnakeGameState Function GetSnakePlayMode

// Begin Class ASnakeGameState
void ASnakeGameState::StaticRegisterNativesASnakeGameState()
{
	UClass* Class = ASnakeGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSnakePlayMode", &ASnakeGameState::execGetSnakePlayMode },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakePlayMode_MetaData[] = {
		{ "ModuleRelativePath", "SnakeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnakePlayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnakePlayMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeGameState_GetSnakePlayMode, "GetSnakePlayMode" }, // 4179887527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakePlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakePlayMode = { "SnakePlayMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeGameState, SnakePlayMode), Z_Construct_UEnum_SnakeGame_ESnakePlayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakePlayMode_MetaData), NewProp_SnakePlayMode_MetaData) }; // 3830163478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakePlayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameState_Statics::NewProp_SnakePlayMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
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
		{ ESnakePlayMode_StaticEnum, TEXT("ESnakePlayMode"), &Z_Registration_Info_UEnum_ESnakePlayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3830163478U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeGameState, ASnakeGameState::StaticClass, TEXT("ASnakeGameState"), &Z_Registration_Info_UClass_ASnakeGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeGameState), 4125932894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_1996266361(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
