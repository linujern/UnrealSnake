// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameDataSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_GameDataSubsystem_generated_h
#error "GameDataSubsystem.generated.h already included, missing '#pragma once' in GameDataSubsystem.h"
#endif
#define SNAKEGAME_GameDataSubsystem_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumActors); \
	DECLARE_FUNCTION(execSetNumBots); \
	DECLARE_FUNCTION(execGetNumBots); \
	DECLARE_FUNCTION(execSetNumPlayers); \
	DECLARE_FUNCTION(execGetNumPlayers);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameDataSubsystem(); \
	friend struct Z_Construct_UClass_UGameDataSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameDataSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UGameDataSubsystem)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDataSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameDataSubsystem(UGameDataSubsystem&&); \
	UGameDataSubsystem(const UGameDataSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameDataSubsystem) \
	NO_API virtual ~UGameDataSubsystem();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_13_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UGameDataSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameDataSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
