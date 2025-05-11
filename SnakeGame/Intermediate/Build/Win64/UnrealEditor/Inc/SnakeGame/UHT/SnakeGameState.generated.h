// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESnakePlayMode : uint8;
#ifdef SNAKEGAME_SnakeGameState_generated_h
#error "SnakeGameState.generated.h already included, missing '#pragma once' in SnakeGameState.h"
#endif
#define SNAKEGAME_SnakeGameState_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSnakePlayMode);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeGameState(); \
	friend struct Z_Construct_UClass_ASnakeGameState_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameState)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeGameState(ASnakeGameState&&); \
	ASnakeGameState(const ASnakeGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeGameState) \
	NO_API virtual ~ASnakeGameState();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_17_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameState_h


#define FOREACH_ENUM_ESNAKEPLAYMODE(op) \
	op(ESnakePlayMode::Team) \
	op(ESnakePlayMode::Battle) 

enum class ESnakePlayMode : uint8;
template<> struct TIsUEnumClass<ESnakePlayMode> { enum { Value = true }; };
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakePlayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
