// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Apple.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApple() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SNAKEGAME_API UClass* Z_Construct_UClass_AApple();
SNAKEGAME_API UClass* Z_Construct_UClass_AApple_NoRegister();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class AApple
void AApple::StaticRegisterNativesAApple()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AApple);
UClass* Z_Construct_UClass_AApple_NoRegister()
{
	return AApple::StaticClass();
}
struct Z_Construct_UClass_AApple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Apple.h" },
		{ "ModuleRelativePath", "Apple.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AApple>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AApple_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AApple_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AApple_Statics::ClassParams = {
	&AApple::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AApple_Statics::Class_MetaDataParams), Z_Construct_UClass_AApple_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AApple()
{
	if (!Z_Registration_Info_UClass_AApple.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AApple.OuterSingleton, Z_Construct_UClass_AApple_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AApple.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<AApple>()
{
	return AApple::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AApple);
AApple::~AApple() {}
// End Class AApple

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Apple_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AApple, AApple::StaticClass, TEXT("AApple"), &Z_Registration_Info_UClass_AApple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AApple), 2212333797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Apple_h_90388099(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Apple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Apple_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
