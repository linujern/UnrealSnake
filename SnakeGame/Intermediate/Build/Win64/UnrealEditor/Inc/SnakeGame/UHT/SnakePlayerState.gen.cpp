// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePlayerState();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakePlayerState Function GetSnakeSpeed
struct Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics
{
	struct SnakePlayerState_eventGetSnakeSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakePlayerState_eventGetSnakeSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePlayerState, nullptr, "GetSnakeSpeed", nullptr, nullptr, Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::SnakePlayerState_eventGetSnakeSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::SnakePlayerState_eventGetSnakeSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePlayerState::execGetSnakeSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSnakeSpeed();
	P_NATIVE_END;
}
// End Class ASnakePlayerState Function GetSnakeSpeed

// Begin Class ASnakePlayerState
void ASnakePlayerState::StaticRegisterNativesASnakePlayerState()
{
	UClass* Class = ASnakePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSnakeSpeed", &ASnakePlayerState::execGetSnakeSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakePlayerState);
UClass* Z_Construct_UClass_ASnakePlayerState_NoRegister()
{
	return ASnakePlayerState::StaticClass();
}
struct Z_Construct_UClass_ASnakePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakePlayerState.h" },
		{ "ModuleRelativePath", "SnakePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnakeSpeed_MetaData[] = {
		{ "Category", "SnakePlayerState" },
		{ "ModuleRelativePath", "SnakePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnakeSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakePlayerState_GetSnakeSpeed, "GetSnakeSpeed" }, // 2230847445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakePlayerState_Statics::NewProp_SnakeSpeed = { "SnakeSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePlayerState, SnakeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnakeSpeed_MetaData), NewProp_SnakeSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePlayerState_Statics::NewProp_SnakeSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakePlayerState_Statics::ClassParams = {
	&ASnakePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASnakePlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakePlayerState()
{
	if (!Z_Registration_Info_UClass_ASnakePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakePlayerState.OuterSingleton, Z_Construct_UClass_ASnakePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakePlayerState.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakePlayerState>()
{
	return ASnakePlayerState::StaticClass();
}
ASnakePlayerState::ASnakePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakePlayerState);
ASnakePlayerState::~ASnakePlayerState() {}
// End Class ASnakePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakePlayerState, ASnakePlayerState::StaticClass, TEXT("ASnakePlayerState"), &Z_Registration_Info_UClass_ASnakePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakePlayerState), 231159985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePlayerState_h_3021614940(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
