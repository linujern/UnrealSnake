// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Definitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefinitions() {}

// Begin Cross Module References
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_ESnakeDirection();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Enum ESnakeDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnakeDirection;
static UEnum* ESnakeDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnakeDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnakeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame_ESnakeDirection, (UObject*)Z_Construct_UPackage__Script_SnakeGame(), TEXT("ESnakeDirection"));
	}
	return Z_Registration_Info_UEnum_ESnakeDirection.OuterSingleton;
}
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakeDirection>()
{
	return ESnakeDirection_StaticEnum();
}
struct Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.Name", "ESnakeDirection::Down" },
		{ "Left.Name", "ESnakeDirection::Left" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "None.Name", "ESnakeDirection::None" },
		{ "Right.Name", "ESnakeDirection::Right" },
		{ "Up.Name", "ESnakeDirection::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnakeDirection::Left", (int64)ESnakeDirection::Left },
		{ "ESnakeDirection::Down", (int64)ESnakeDirection::Down },
		{ "ESnakeDirection::Up", (int64)ESnakeDirection::Up },
		{ "ESnakeDirection::Right", (int64)ESnakeDirection::Right },
		{ "ESnakeDirection::None", (int64)ESnakeDirection::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame,
	nullptr,
	"ESnakeDirection",
	"ESnakeDirection",
	Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SnakeGame_ESnakeDirection()
{
	if (!Z_Registration_Info_UEnum_ESnakeDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnakeDirection.InnerSingleton, Z_Construct_UEnum_SnakeGame_ESnakeDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnakeDirection.InnerSingleton;
}
// End Enum ESnakeDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Definitions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESnakeDirection_StaticEnum, TEXT("ESnakeDirection"), &Z_Registration_Info_UEnum_ESnakeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 214707847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Definitions_h_91482246(TEXT("/Script/SnakeGame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Definitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Definitions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
