// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameStateSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameState : uint8;
#ifdef SNAKEGAME_GameStateSubsystem_generated_h
#error "GameStateSubsystem.generated.h already included, missing '#pragma once' in GameStateSubsystem.h"
#endif
#define SNAKEGAME_GameStateSubsystem_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_19_DELEGATE \
SNAKEGAME_API void FOnGameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameStateChanged, EGameState OldGameState, EGameState NewGameState);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeState); \
	DECLARE_FUNCTION(execGetGameState);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStateSubsystem(); \
	friend struct Z_Construct_UClass_UGameStateSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameStateSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UGameStateSubsystem)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStateSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameStateSubsystem(UGameStateSubsystem&&); \
	UGameStateSubsystem(const UGameStateSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStateSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameStateSubsystem) \
	NO_API virtual ~UGameStateSubsystem();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_24_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UGameStateSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_GameStateSubsystem_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::Init) \
	op(EGameState::Menu) \
	op(EGameState::Play) \
	op(EGameState::Pause) \
	op(EGameState::Outro) \
	op(EGameState::Quit) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> SNAKEGAME_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
