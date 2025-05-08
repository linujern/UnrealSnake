// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeBodyPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeBodyPart() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBodyPart();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBodyPart_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakeBodyPart Function AddChildBodyPart
struct Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics
{
	struct SnakeBodyPart_eventAddChildBodyPart_Parms
	{
		ASnakeBodyPart* InChildBodyPart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InChildBodyPart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::NewProp_InChildBodyPart = { "InChildBodyPart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeBodyPart_eventAddChildBodyPart_Parms, InChildBodyPart), Z_Construct_UClass_ASnakeBodyPart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::NewProp_InChildBodyPart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBodyPart, nullptr, "AddChildBodyPart", nullptr, nullptr, Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::SnakeBodyPart_eventAddChildBodyPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::SnakeBodyPart_eventAddChildBodyPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakeBodyPart::execAddChildBodyPart)
{
	P_GET_OBJECT(ASnakeBodyPart,Z_Param_InChildBodyPart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChildBodyPart(Z_Param_InChildBodyPart);
	P_NATIVE_END;
}
// End Class ASnakeBodyPart Function AddChildBodyPart

// Begin Class ASnakeBodyPart Function SetNextPosition
struct Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics
{
	struct SnakeBodyPart_eventSetNextPosition_Parms
	{
		FVector InPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeBodyPart_eventSetNextPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::NewProp_InPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBodyPart, nullptr, "SetNextPosition", nullptr, nullptr, Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::SnakeBodyPart_eventSetNextPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::SnakeBodyPart_eventSetNextPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakeBodyPart::execSetNextPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNextPosition(Z_Param_Out_InPosition);
	P_NATIVE_END;
}
// End Class ASnakeBodyPart Function SetNextPosition

// Begin Class ASnakeBodyPart
void ASnakeBodyPart::StaticRegisterNativesASnakeBodyPart()
{
	UClass* Class = ASnakeBodyPart::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildBodyPart", &ASnakeBodyPart::execAddChildBodyPart },
		{ "SetNextPosition", &ASnakeBodyPart::execSetNextPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeBodyPart);
UClass* Z_Construct_UClass_ASnakeBodyPart_NoRegister()
{
	return ASnakeBodyPart::StaticClass();
}
struct Z_Construct_UClass_ASnakeBodyPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeBodyPart.h" },
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SnakeBodyPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Root of the blueprint\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root of the blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "SnakeBodyPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SnakeBodyPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Head of the snake\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Head of the snake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBodyPart_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextPosition_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBodyPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildBodyPart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeBodyPart_AddChildBodyPart, "AddChildBodyPart" }, // 3817393121
		{ &Z_Construct_UFunction_ASnakeBodyPart_SetNextPosition, "SetNextPosition" }, // 2918686762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeBodyPart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBodyPart, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBodyPart, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBodyPart, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_ChildBodyPart = { "ChildBodyPart", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBodyPart, ChildBodyPart), Z_Construct_UClass_ASnakeBodyPart_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBodyPart_MetaData), NewProp_ChildBodyPart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_NextPosition = { "NextPosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBodyPart, NextPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextPosition_MetaData), NewProp_NextPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeBodyPart, PlayerState), Z_Construct_UClass_ASnakePlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerState_MetaData), NewProp_PlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeBodyPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_ChildBodyPart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_NextPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBodyPart_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBodyPart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeBodyPart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBodyPart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeBodyPart_Statics::ClassParams = {
	&ASnakeBodyPart::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASnakeBodyPart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBodyPart_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBodyPart_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeBodyPart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeBodyPart()
{
	if (!Z_Registration_Info_UClass_ASnakeBodyPart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeBodyPart.OuterSingleton, Z_Construct_UClass_ASnakeBodyPart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeBodyPart.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeBodyPart>()
{
	return ASnakeBodyPart::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeBodyPart);
ASnakeBodyPart::~ASnakeBodyPart() {}
// End Class ASnakeBodyPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeBodyPart, ASnakeBodyPart::StaticClass, TEXT("ASnakeBodyPart"), &Z_Registration_Info_UClass_ASnakeBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeBodyPart), 2810513724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_3243107500(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
