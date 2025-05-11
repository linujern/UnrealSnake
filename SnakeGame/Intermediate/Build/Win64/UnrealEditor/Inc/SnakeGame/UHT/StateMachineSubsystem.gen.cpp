// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/StateMachineSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachineSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SNAKEGAME_API UClass* Z_Construct_UClass_UStateMachineSubsystem();
SNAKEGAME_API UClass* Z_Construct_UClass_UStateMachineSubsystem_NoRegister();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_EGlobalState();
SNAKEGAME_API UFunction* Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Enum EGlobalState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGlobalState;
static UEnum* EGlobalState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGlobalState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGlobalState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_EGlobalState, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("EGlobalState"));
	}
	return Z_Registration_Info_UEnum_EGlobalState.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<EGlobalState>()
{
	return EGlobalState_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_EGlobalState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Init.Name", "EGlobalState::Init" },
		{ "Menu.Name", "EGlobalState::Menu" },
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
		{ "Outro.Name", "EGlobalState::Outro" },
		{ "Pause.Name", "EGlobalState::Pause" },
		{ "Play.Name", "EGlobalState::Play" },
		{ "Quit.Name", "EGlobalState::Quit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGlobalState::Init", (int64)EGlobalState::Init },
		{ "EGlobalState::Menu", (int64)EGlobalState::Menu },
		{ "EGlobalState::Play", (int64)EGlobalState::Play },
		{ "EGlobalState::Pause", (int64)EGlobalState::Pause },
		{ "EGlobalState::Outro", (int64)EGlobalState::Outro },
		{ "EGlobalState::Quit", (int64)EGlobalState::Quit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_EGlobalState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"EGlobalState",
	"EGlobalState",
	Z_Construct_UEnum_SnakeGame_EGlobalState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_EGlobalState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_EGlobalState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_EGlobalState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_EGlobalState()
{
	if (!Z_Registration_Info_UEnum_EGlobalState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGlobalState.InnerSingleton, Z_Construct_UEnum_SnakeGame_EGlobalState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGlobalState.InnerSingleton;
}
// End Enum EGlobalState

// Begin Delegate FOnGlobalStateChanged
struct Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics
{
	struct _Script_SnakeGame_eventOnGlobalStateChanged_Parms
	{
		EGlobalState OldGlobalState;
		EGlobalState NewGlobalState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldGlobalState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldGlobalState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGlobalState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGlobalState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_OldGlobalState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_OldGlobalState = { "OldGlobalState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SnakeGame_eventOnGlobalStateChanged_Parms, OldGlobalState), Z_Construct_UEnum_SnakeGame_EGlobalState, METADATA_PARAMS(0, nullptr) }; // 1662558222
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_NewGlobalState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_NewGlobalState = { "NewGlobalState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SnakeGame_eventOnGlobalStateChanged_Parms, NewGlobalState), Z_Construct_UEnum_SnakeGame_EGlobalState, METADATA_PARAMS(0, nullptr) }; // 1662558222
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_OldGlobalState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_OldGlobalState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_NewGlobalState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::NewProp_NewGlobalState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnakeGame, nullptr, "OnGlobalStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::_Script_SnakeGame_eventOnGlobalStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::_Script_SnakeGame_eventOnGlobalStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGlobalStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalStateChanged, EGlobalState OldGlobalState, EGlobalState NewGlobalState)
{
	struct _Script_SnakeGame_eventOnGlobalStateChanged_Parms
	{
		EGlobalState OldGlobalState;
		EGlobalState NewGlobalState;
	};
	_Script_SnakeGame_eventOnGlobalStateChanged_Parms Parms;
	Parms.OldGlobalState=OldGlobalState;
	Parms.NewGlobalState=NewGlobalState;
	OnGlobalStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGlobalStateChanged

// Begin Class UStateMachineSubsystem Function ChangeState
struct Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics
{
	struct StateMachineSubsystem_eventChangeState_Parms
	{
		EGlobalState InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::NewProp_InNewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateMachineSubsystem_eventChangeState_Parms, InNewState), Z_Construct_UEnum_SnakeGame_EGlobalState, METADATA_PARAMS(0, nullptr) }; // 1662558222
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::NewProp_InNewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateMachineSubsystem, nullptr, "ChangeState", nullptr, nullptr, Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::StateMachineSubsystem_eventChangeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::StateMachineSubsystem_eventChangeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateMachineSubsystem_ChangeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateMachineSubsystem_ChangeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateMachineSubsystem::execChangeState)
{
	P_GET_ENUM(EGlobalState,Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeState(EGlobalState(Z_Param_InNewState));
	P_NATIVE_END;
}
// End Class UStateMachineSubsystem Function ChangeState

// Begin Class UStateMachineSubsystem Function GetGlobalState
struct Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics
{
	struct StateMachineSubsystem_eventGetGlobalState_Parms
	{
		EGlobalState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateMachineSubsystem_eventGetGlobalState_Parms, ReturnValue), Z_Construct_UEnum_SnakeGame_EGlobalState, METADATA_PARAMS(0, nullptr) }; // 1662558222
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateMachineSubsystem, nullptr, "GetGlobalState", nullptr, nullptr, Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::StateMachineSubsystem_eventGetGlobalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::StateMachineSubsystem_eventGetGlobalState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateMachineSubsystem::execGetGlobalState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGlobalState*)Z_Param__Result=P_THIS->GetGlobalState();
	P_NATIVE_END;
}
// End Class UStateMachineSubsystem Function GetGlobalState

// Begin Class UStateMachineSubsystem
void UStateMachineSubsystem::StaticRegisterNativesUStateMachineSubsystem()
{
	UClass* Class = UStateMachineSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeState", &UStateMachineSubsystem::execChangeState },
		{ "GetGlobalState", &UStateMachineSubsystem::execGetGlobalState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateMachineSubsystem);
UClass* Z_Construct_UClass_UStateMachineSubsystem_NoRegister()
{
	return UStateMachineSubsystem::StaticClass();
}
struct Z_Construct_UClass_UStateMachineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachineSubsystem.h" },
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalState_MetaData[] = {
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalStateChanged_MetaData[] = {
		{ "Category", "GlobalState" },
		{ "ModuleRelativePath", "StateMachineSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GlobalState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateMachineSubsystem_ChangeState, "ChangeState" }, // 4040581543
		{ &Z_Construct_UFunction_UStateMachineSubsystem_GetGlobalState, "GetGlobalState" }, // 298135011
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateMachineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStateMachineSubsystem_Statics::NewProp_GlobalState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStateMachineSubsystem_Statics::NewProp_GlobalState = { "GlobalState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateMachineSubsystem, GlobalState), Z_Construct_UEnum_SnakeGame_EGlobalState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalState_MetaData), NewProp_GlobalState_MetaData) }; // 1662558222
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateMachineSubsystem_Statics::NewProp_OnGlobalStateChanged = { "OnGlobalStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateMachineSubsystem, OnGlobalStateChanged), Z_Construct_UDelegateFunction_SnakeGame_OnGlobalStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalStateChanged_MetaData), NewProp_OnGlobalStateChanged_MetaData) }; // 3510567585
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateMachineSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineSubsystem_Statics::NewProp_GlobalState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineSubsystem_Statics::NewProp_GlobalState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineSubsystem_Statics::NewProp_OnGlobalStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateMachineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateMachineSubsystem_Statics::ClassParams = {
	&UStateMachineSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStateMachineSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateMachineSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateMachineSubsystem()
{
	if (!Z_Registration_Info_UClass_UStateMachineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateMachineSubsystem.OuterSingleton, Z_Construct_UClass_UStateMachineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateMachineSubsystem.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<UStateMachineSubsystem>()
{
	return UStateMachineSubsystem::StaticClass();
}
UStateMachineSubsystem::UStateMachineSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateMachineSubsystem);
UStateMachineSubsystem::~UStateMachineSubsystem() {}
// End Class UStateMachineSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGlobalState_StaticEnum, TEXT("EGlobalState"), &Z_Registration_Info_UEnum_EGlobalState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1662558222U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateMachineSubsystem, UStateMachineSubsystem::StaticClass, TEXT("UStateMachineSubsystem"), &Z_Registration_Info_UClass_UStateMachineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateMachineSubsystem), 4252655350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_482148506(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
