// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeWorld() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeWorld();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakeWorld
void ASnakeWorld::StaticRegisterNativesASnakeWorld()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeWorld);
UClass* Z_Construct_UClass_ASnakeWorld_NoRegister()
{
	return ASnakeWorld::StaticClass();
}
struct Z_Construct_UClass_ASnakeWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SnakeWorld.h" },
		{ "ModuleRelativePath", "SnakeWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SnakeWorld" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedWalls_MetaData[] = {
		{ "Category", "SnakeWorld" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedWalls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeWorld_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeWorld, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeWorld_Statics::NewProp_InstancedWalls = { "InstancedWalls", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeWorld, InstancedWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedWalls_MetaData), NewProp_InstancedWalls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeWorld_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeWorld_Statics::NewProp_InstancedWalls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeWorld_Statics::ClassParams = {
	&ASnakeWorld::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnakeWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeWorld_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeWorld()
{
	if (!Z_Registration_Info_UClass_ASnakeWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeWorld.OuterSingleton, Z_Construct_UClass_ASnakeWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeWorld.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeWorld>()
{
	return ASnakeWorld::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeWorld);
ASnakeWorld::~ASnakeWorld() {}
// End Class ASnakeWorld

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeWorld, ASnakeWorld::StaticClass, TEXT("ASnakeWorld"), &Z_Registration_Info_UClass_ASnakeWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeWorld), 1716496532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_1154755566(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
