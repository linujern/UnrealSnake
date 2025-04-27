// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePawn();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakePawn
void ASnakePawn::StaticRegisterNativesASnakePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakePawn);
UClass* Z_Construct_UClass_ASnakePawn_NoRegister()
{
	return ASnakePawn::StaticClass();
}
struct Z_Construct_UClass_ASnakePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SnakePawn.h" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_CollisionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakePawn_Statics::ClassParams = {
	&ASnakePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnakePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakePawn()
{
	if (!Z_Registration_Info_UClass_ASnakePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakePawn.OuterSingleton, Z_Construct_UClass_ASnakePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakePawn.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakePawn>()
{
	return ASnakePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakePawn);
ASnakePawn::~ASnakePawn() {}
// End Class ASnakePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakePawn, ASnakePawn::StaticClass, TEXT("ASnakePawn"), &Z_Registration_Info_UClass_ASnakePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakePawn), 3793561855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_1972910146(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
