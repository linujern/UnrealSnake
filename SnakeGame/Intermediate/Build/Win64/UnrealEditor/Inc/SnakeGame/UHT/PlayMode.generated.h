// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_PlayMode_generated_h
#error "PlayMode.generated.h already included, missing '#pragma once' in PlayMode.h"
#endif
#define SNAKEGAME_PlayMode_generated_h

#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayMode(); \
	friend struct Z_Construct_UClass_APlayMode_Statics; \
public: \
	DECLARE_CLASS(APlayMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(APlayMode)


#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayMode(APlayMode&&); \
	APlayMode(const APlayMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayMode) \
	NO_API virtual ~APlayMode();


#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_12_PROLOG
#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class APlayMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_PlayMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
