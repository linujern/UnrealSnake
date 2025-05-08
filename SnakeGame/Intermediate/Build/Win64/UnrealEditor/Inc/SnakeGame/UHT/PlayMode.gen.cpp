// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/PlayMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
SNAKEGAME_API UClass* Z_Construct_UClass_APlayMode();
SNAKEGAME_API UClass* Z_Construct_UClass_APlayMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class APlayMode
void APlayMode::StaticRegisterNativesAPlayMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayMode);
UClass* Z_Construct_UClass_APlayMode_NoRegister()
{
	return APlayMode::StaticClass();
}
struct Z_Construct_UClass_APlayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayMode.h" },
		{ "ModuleRelativePath", "PlayMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayMode_Statics::ClassParams = {
	&APlayMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayMode()
{
	if (!Z_Registration_Info_UClass_APlayMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayMode.OuterSingleton, Z_Construct_UClass_APlayMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayMode.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<APlayMode>()
{
	return APlayMode::StaticClass();
}
APlayMode::APlayMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayMode);
APlayMode::~APlayMode() {}
// End Class APlayMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayMode, APlayMode::StaticClass, TEXT("APlayMode"), &Z_Registration_Info_UClass_APlayMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayMode), 3099864580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_1724944301(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
