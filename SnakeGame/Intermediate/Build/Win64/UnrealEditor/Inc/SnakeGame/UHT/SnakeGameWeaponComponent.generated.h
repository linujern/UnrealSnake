// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeGameWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeGameCharacter;
#ifdef SNAKEGAME_SnakeGameWeaponComponent_generated_h
#error "SnakeGameWeaponComponent.generated.h already included, missing '#pragma once' in SnakeGameWeaponComponent.h"
#endif
#define SNAKEGAME_SnakeGameWeaponComponent_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnakeGameWeaponComponent(); \
	friend struct Z_Construct_UClass_USnakeGameWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(USnakeGameWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(USnakeGameWeaponComponent)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnakeGameWeaponComponent(USnakeGameWeaponComponent&&); \
	USnakeGameWeaponComponent(const USnakeGameWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnakeGameWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnakeGameWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USnakeGameWeaponComponent) \
	NO_API virtual ~USnakeGameWeaponComponent();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_11_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class USnakeGameWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGameWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
