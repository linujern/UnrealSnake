// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameGameMode();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakeGameGameMode
void ASnakeGameGameMode::StaticRegisterNativesASnakeGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeGameGameMode);
UClass* Z_Construct_UClass_ASnakeGameGameMode_NoRegister()
{
	return ASnakeGameGameMode::StaticClass();
}
struct Z_Construct_UClass_ASnakeGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakeGameGameMode.h" },
		{ "ModuleRelativePath", "SnakeGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASnakeGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameGameMode_Statics::ClassParams = {
	&ASnakeGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeGameGameMode()
{
	if (!Z_Registration_Info_UClass_ASnakeGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeGameGameMode.OuterSingleton, Z_Construct_UClass_ASnakeGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeGameGameMode.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakeGameGameMode>()
{
	return ASnakeGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameGameMode);
ASnakeGameGameMode::~ASnakeGameGameMode() {}
// End Class ASnakeGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeGameGameMode, ASnakeGameGameMode::StaticClass, TEXT("ASnakeGameGameMode"), &Z_Registration_Info_UClass_ASnakeGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeGameGameMode), 1639640863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_2779976101(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
