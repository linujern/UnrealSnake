// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESnakeDirection : uint8;
#ifdef SNAKEGAME_SnakePawn_generated_h
#error "SnakePawn.generated.h already included, missing '#pragma once' in SnakePawn.h"
#endif
#define SNAKEGAME_SnakePawn_generated_h

#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCollision); \
	DECLARE_FUNCTION(execQueueNewDirection); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execAteApple); \
	DECLARE_FUNCTION(execRotateSnake); \
	DECLARE_FUNCTION(execMoveSnake); \
	DECLARE_FUNCTION(execUpdateMovement); \
	DECLARE_FUNCTION(execUpdateDirection);


#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakePawn(); \
	friend struct Z_Construct_UClass_ASnakePawn_Statics; \
public: \
	DECLARE_CLASS(ASnakePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakePawn)


#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakePawn(ASnakePawn&&); \
	ASnakePawn(const ASnakePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakePawn) \
	NO_API virtual ~ASnakePawn();


#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_15_PROLOG
#define FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
