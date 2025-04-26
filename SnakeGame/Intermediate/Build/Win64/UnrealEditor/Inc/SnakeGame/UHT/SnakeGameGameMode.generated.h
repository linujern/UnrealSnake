// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeGameGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_SnakeGameGameMode_generated_h
#error "SnakeGameGameMode.generated.h already included, missing '#pragma once' in SnakeGameGameMode.h"
#endif
#define SNAKEGAME_SnakeGameGameMode_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeGameGameMode(); \
	friend struct Z_Construct_UClass_ASnakeGameGameMode_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), SNAKEGAME_API) \
	DECLARE_SERIALIZER(ASnakeGameGameMode)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeGameGameMode(ASnakeGameGameMode&&); \
	ASnakeGameGameMode(const ASnakeGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME_API, ASnakeGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeGameGameMode) \
	SNAKEGAME_API virtual ~ASnakeGameGameMode();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_9_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeGameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
