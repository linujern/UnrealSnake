// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateMachineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGlobalState : uint8;
#ifdef SNAKEGAME_StateMachineSubsystem_generated_h
#error "StateMachineSubsystem.generated.h already included, missing '#pragma once' in StateMachineSubsystem.h"
#endif
#define SNAKEGAME_StateMachineSubsystem_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_19_DELEGATE \
SNAKEGAME_API void FOnGlobalStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalStateChanged, EGlobalState OldGlobalState, EGlobalState NewGlobalState);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeState); \
	DECLARE_FUNCTION(execGetGlobalState);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateMachineSubsystem(); \
	friend struct Z_Construct_UClass_UStateMachineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UStateMachineSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UStateMachineSubsystem)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateMachineSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateMachineSubsystem(UStateMachineSubsystem&&); \
	UStateMachineSubsystem(const UStateMachineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateMachineSubsystem) \
	NO_API virtual ~UStateMachineSubsystem();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_24_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UStateMachineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_StateMachineSubsystem_h


#define FOREACH_ENUM_EGLOBALSTATE(op) \
	op(EGlobalState::Init) \
	op(EGlobalState::Menu) \
	op(EGlobalState::Play) \
	op(EGlobalState::Pause) \
	op(EGlobalState::Outro) \
	op(EGlobalState::Quit) 

enum class EGlobalState : uint8;
template<> struct TIsUEnumClass<EGlobalState> { enum { Value = true }; };
template<> SNAKEGAME_API UEnum* StaticEnum<EGlobalState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
