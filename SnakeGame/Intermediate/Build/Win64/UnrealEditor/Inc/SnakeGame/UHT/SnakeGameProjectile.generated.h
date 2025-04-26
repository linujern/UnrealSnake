// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SNAKEGAME_SnakeGameProjectile_generated_h
#error "SnakeGameProjectile.generated.h already included, missing '#pragma once' in SnakeGameProjectile.h"
#endif
#define SNAKEGAME_SnakeGameProjectile_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeGameProjectile(); \
	friend struct Z_Construct_UClass_ASnakeGameProjectile_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakeGameProjectile(ASnakeGameProjectile&&); \
	ASnakeGameProjectile(const ASnakeGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeGameProjectile) \
	NO_API virtual ~ASnakeGameProjectile();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_12_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
