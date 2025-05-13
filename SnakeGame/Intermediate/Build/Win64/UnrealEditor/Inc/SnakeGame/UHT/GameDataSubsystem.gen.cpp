// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/GameDataSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDataSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SNAKEGAME_API UClass* Z_Construct_UClass_UGameDataSubsystem();
SNAKEGAME_API UClass* Z_Construct_UClass_UGameDataSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class UGameDataSubsystem Function GetNumActors
struct Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics
{
	struct GameDataSubsystem_eventGetNumActors_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataSubsystem_eventGetNumActors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataSubsystem, nullptr, "GetNumActors", nullptr, nullptr, Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::GameDataSubsystem_eventGetNumActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::GameDataSubsystem_eventGetNumActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataSubsystem_GetNumActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataSubsystem_GetNumActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataSubsystem::execGetNumActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumActors();
	P_NATIVE_END;
}
// End Class UGameDataSubsystem Function GetNumActors

// Begin Class UGameDataSubsystem Function GetNumBots
struct Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics
{
	struct GameDataSubsystem_eventGetNumBots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataSubsystem_eventGetNumBots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataSubsystem, nullptr, "GetNumBots", nullptr, nullptr, Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::GameDataSubsystem_eventGetNumBots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::GameDataSubsystem_eventGetNumBots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataSubsystem_GetNumBots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataSubsystem_GetNumBots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataSubsystem::execGetNumBots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumBots();
	P_NATIVE_END;
}
// End Class UGameDataSubsystem Function GetNumBots

// Begin Class UGameDataSubsystem Function GetNumPlayers
struct Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics
{
	struct GameDataSubsystem_eventGetNumPlayers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataSubsystem_eventGetNumPlayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataSubsystem, nullptr, "GetNumPlayers", nullptr, nullptr, Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::GameDataSubsystem_eventGetNumPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::GameDataSubsystem_eventGetNumPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataSubsystem::execGetNumPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumPlayers();
	P_NATIVE_END;
}
// End Class UGameDataSubsystem Function GetNumPlayers

// Begin Class UGameDataSubsystem Function SetNumBots
struct Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics
{
	struct GameDataSubsystem_eventSetNumBots_Parms
	{
		int32 InNumBots;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumBots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::NewProp_InNumBots = { "InNumBots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataSubsystem_eventSetNumBots_Parms, InNumBots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::NewProp_InNumBots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataSubsystem, nullptr, "SetNumBots", nullptr, nullptr, Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::GameDataSubsystem_eventSetNumBots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::GameDataSubsystem_eventSetNumBots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataSubsystem_SetNumBots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataSubsystem_SetNumBots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataSubsystem::execSetNumBots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumBots);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumBots(Z_Param_InNumBots);
	P_NATIVE_END;
}
// End Class UGameDataSubsystem Function SetNumBots

// Begin Class UGameDataSubsystem Function SetNumPlayers
struct Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics
{
	struct GameDataSubsystem_eventSetNumPlayers_Parms
	{
		int32 InNumPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::NewProp_InNumPlayers = { "InNumPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataSubsystem_eventSetNumPlayers_Parms, InNumPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::NewProp_InNumPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataSubsystem, nullptr, "SetNumPlayers", nullptr, nullptr, Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::GameDataSubsystem_eventSetNumPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::GameDataSubsystem_eventSetNumPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataSubsystem::execSetNumPlayers)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumPlayers(Z_Param_InNumPlayers);
	P_NATIVE_END;
}
// End Class UGameDataSubsystem Function SetNumPlayers

// Begin Class UGameDataSubsystem
void UGameDataSubsystem::StaticRegisterNativesUGameDataSubsystem()
{
	UClass* Class = UGameDataSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumActors", &UGameDataSubsystem::execGetNumActors },
		{ "GetNumBots", &UGameDataSubsystem::execGetNumBots },
		{ "GetNumPlayers", &UGameDataSubsystem::execGetNumPlayers },
		{ "SetNumBots", &UGameDataSubsystem::execSetNumBots },
		{ "SetNumPlayers", &UGameDataSubsystem::execSetNumPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameDataSubsystem);
UClass* Z_Construct_UClass_UGameDataSubsystem_NoRegister()
{
	return UGameDataSubsystem::StaticClass();
}
struct Z_Construct_UClass_UGameDataSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameDataSubsystem.h" },
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlayers_MetaData[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBots_MetaData[] = {
		{ "ModuleRelativePath", "GameDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameDataSubsystem_GetNumActors, "GetNumActors" }, // 4036938029
		{ &Z_Construct_UFunction_UGameDataSubsystem_GetNumBots, "GetNumBots" }, // 413328821
		{ &Z_Construct_UFunction_UGameDataSubsystem_GetNumPlayers, "GetNumPlayers" }, // 1640974141
		{ &Z_Construct_UFunction_UGameDataSubsystem_SetNumBots, "SetNumBots" }, // 169246654
		{ &Z_Construct_UFunction_UGameDataSubsystem_SetNumPlayers, "SetNumPlayers" }, // 2447626686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameDataSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameDataSubsystem_Statics::NewProp_NumPlayers = { "NumPlayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataSubsystem, NumPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlayers_MetaData), NewProp_NumPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameDataSubsystem_Statics::NewProp_NumBots = { "NumBots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataSubsystem, NumBots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBots_MetaData), NewProp_NumBots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameDataSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataSubsystem_Statics::NewProp_NumPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataSubsystem_Statics::NewProp_NumBots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameDataSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameDataSubsystem_Statics::ClassParams = {
	&UGameDataSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameDataSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameDataSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameDataSubsystem()
{
	if (!Z_Registration_Info_UClass_UGameDataSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameDataSubsystem.OuterSingleton, Z_Construct_UClass_UGameDataSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameDataSubsystem.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<UGameDataSubsystem>()
{
	return UGameDataSubsystem::StaticClass();
}
UGameDataSubsystem::UGameDataSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDataSubsystem);
UGameDataSubsystem::~UGameDataSubsystem() {}
// End Class UGameDataSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameDataSubsystem, UGameDataSubsystem::StaticClass, TEXT("UGameDataSubsystem"), &Z_Registration_Info_UClass_UGameDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameDataSubsystem), 3609466295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_3650974400(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
