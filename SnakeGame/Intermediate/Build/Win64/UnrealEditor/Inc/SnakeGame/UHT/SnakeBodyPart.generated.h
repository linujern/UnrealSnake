// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeBodyPart.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeBodyPart;
#ifdef SNAKEGAME_SnakeBodyPart_generated_h
#error "SnakeBodyPart.generated.h already included, missing '#pragma once' in SnakeBodyPart.h"
#endif
#define SNAKEGAME_SnakeBodyPart_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNextPosition); \
	DECLARE_FUNCTION(execAddChildBodyPart);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeBodyPart(); \
	friend struct Z_Construct_UClass_ASnakeBodyPart_Statics; \
public: \
	DECLARE_CLASS(ASnakeBodyPart, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBodyPart)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeBodyPart(ASnakeBodyPart&&); \
	ASnakeBodyPart(const ASnakeBodyPart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBodyPart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBodyPart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeBodyPart) \
	NO_API virtual ~ASnakeBodyPart();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_12_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeBodyPart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeBodyPart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
