// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeWorld.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_SnakeWorld_generated_h
#error "SnakeWorld.generated.h already included, missing '#pragma once' in SnakeWorld.h"
#endif
#define SNAKEGAME_SnakeWorld_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeWorld(); \
	friend struct Z_Construct_UClass_ASnakeWorld_Statics; \
public: \
	DECLARE_CLASS(ASnakeWorld, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeWorld)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeWorld(ASnakeWorld&&); \
	ASnakeWorld(const ASnakeWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeWorld) \
	NO_API virtual ~ASnakeWorld();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_11_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
