// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/GameStateSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SNAKEGAME_API UClass* Z_Construct_UClass_UGameStateSubsystem();
SNAKEGAME_API UClass* Z_Construct_UClass_UGameStateSubsystem_NoRegister();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_EGameState();
SNAKEGAME_API UFunction* Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Enum EGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_EGameState, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Init.Name", "EGameState::Init" },
		{ "Menu.Name", "EGameState::Menu" },
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
		{ "Outro.Name", "EGameState::Outro" },
		{ "Pause.Name", "EGameState::Pause" },
		{ "Play.Name", "EGameState::Play" },
		{ "Quit.Name", "EGameState::Quit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::Init", (int64)EGameState::Init },
		{ "EGameState::Menu", (int64)EGameState::Menu },
		{ "EGameState::Play", (int64)EGameState::Play },
		{ "EGameState::Pause", (int64)EGameState::Pause },
		{ "EGameState::Outro", (int64)EGameState::Outro },
		{ "EGameState::Quit", (int64)EGameState::Quit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_SnakeGame_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_SnakeGame_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// End Enum EGameState

// Begin Delegate FOnGameStateChanged
struct Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics
{
	struct _Script_SnakeGame_eventOnGameStateChanged_Parms
	{
		EGameState OldGameState;
		EGameState NewGameState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldGameState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldGameState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGameState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGameState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_OldGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_OldGameState = { "OldGameState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SnakeGame_eventOnGameStateChanged_Parms, OldGameState), Z_Construct_UEnum_SnakeGame_EGameState, METADATA_PARAMS(0, nullptr) }; // 3981564226
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_NewGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_NewGameState = { "NewGameState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SnakeGame_eventOnGameStateChanged_Parms, NewGameState), Z_Construct_UEnum_SnakeGame_EGameState, METADATA_PARAMS(0, nullptr) }; // 3981564226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_OldGameState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_OldGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_NewGameState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::NewProp_NewGameState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnakeGame, nullptr, "OnGameStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::_Script_SnakeGame_eventOnGameStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::_Script_SnakeGame_eventOnGameStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameStateChanged, EGameState OldGameState, EGameState NewGameState)
{
	struct _Script_SnakeGame_eventOnGameStateChanged_Parms
	{
		EGameState OldGameState;
		EGameState NewGameState;
	};
	_Script_SnakeGame_eventOnGameStateChanged_Parms Parms;
	Parms.OldGameState=OldGameState;
	Parms.NewGameState=NewGameState;
	OnGameStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGameStateChanged

// Begin Class UGameStateSubsystem Function ChangeState
struct Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics
{
	struct GameStateSubsystem_eventChangeState_Parms
	{
		EGameState InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::NewProp_InNewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateSubsystem_eventChangeState_Parms, InNewState), Z_Construct_UEnum_SnakeGame_EGameState, METADATA_PARAMS(0, nullptr) }; // 3981564226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::NewProp_InNewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameStateSubsystem, nullptr, "ChangeState", nullptr, nullptr, Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::GameStateSubsystem_eventChangeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::GameStateSubsystem_eventChangeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameStateSubsystem_ChangeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameStateSubsystem_ChangeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameStateSubsystem::execChangeState)
{
	P_GET_ENUM(EGameState,Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeState(EGameState(Z_Param_InNewState));
	P_NATIVE_END;
}
// End Class UGameStateSubsystem Function ChangeState

// Begin Class UGameStateSubsystem Function GetGameState
struct Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics
{
	struct GameStateSubsystem_eventGetGameState_Parms
	{
		EGameState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateSubsystem_eventGetGameState_Parms, ReturnValue), Z_Construct_UEnum_SnakeGame_EGameState, METADATA_PARAMS(0, nullptr) }; // 3981564226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameStateSubsystem, nullptr, "GetGameState", nullptr, nullptr, Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::GameStateSubsystem_eventGetGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::GameStateSubsystem_eventGetGameState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameStateSubsystem_GetGameState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameStateSubsystem_GetGameState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameStateSubsystem::execGetGameState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGameState*)Z_Param__Result=P_THIS->GetGameState();
	P_NATIVE_END;
}
// End Class UGameStateSubsystem Function GetGameState

// Begin Class UGameStateSubsystem
void UGameStateSubsystem::StaticRegisterNativesUGameStateSubsystem()
{
	UClass* Class = UGameStateSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeState", &UGameStateSubsystem::execChangeState },
		{ "GetGameState", &UGameStateSubsystem::execGetGameState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameStateSubsystem);
UClass* Z_Construct_UClass_UGameStateSubsystem_NoRegister()
{
	return UGameStateSubsystem::StaticClass();
}
struct Z_Construct_UClass_UGameStateSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameStateSubsystem.h" },
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameStateChanged_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "GameStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameStateSubsystem_ChangeState, "ChangeState" }, // 1882860750
		{ &Z_Construct_UFunction_UGameStateSubsystem_GetGameState, "GetGameState" }, // 645478222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameStateSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameStateSubsystem_Statics::NewProp_GameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameStateSubsystem_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameStateSubsystem, GameState), Z_Construct_UEnum_SnakeGame_EGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameState_MetaData), NewProp_GameState_MetaData) }; // 3981564226
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameStateSubsystem_Statics::NewProp_OnGameStateChanged = { "OnGameStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameStateSubsystem, OnGameStateChanged), Z_Construct_UDelegateFunction_SnakeGame_OnGameStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameStateChanged_MetaData), NewProp_OnGameStateChanged_MetaData) }; // 758625156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameStateSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameStateSubsystem_Statics::NewProp_GameState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameStateSubsystem_Statics::NewProp_GameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameStateSubsystem_Statics::NewProp_OnGameStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameStateSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameStateSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameStateSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameStateSubsystem_Statics::ClassParams = {
	&UGameStateSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameStateSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameStateSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameStateSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameStateSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameStateSubsystem()
{
	if (!Z_Registration_Info_UClass_UGameStateSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameStateSubsystem.OuterSingleton, Z_Construct_UClass_UGameStateSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameStateSubsystem.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<UGameStateSubsystem>()
{
	return UGameStateSubsystem::StaticClass();
}
UGameStateSubsystem::UGameStateSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStateSubsystem);
UGameStateSubsystem::~UGameStateSubsystem() {}
// End Class UGameStateSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3981564226U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameStateSubsystem, UGameStateSubsystem::StaticClass, TEXT("UGameStateSubsystem"), &Z_Registration_Info_UClass_UGameStateSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStateSubsystem), 3925229098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_2947776028(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
