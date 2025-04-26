// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeGamePickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASnakeGameCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SNAKEGAME_SnakeGamePickUpComponent_generated_h
#error "SnakeGamePickUpComponent.generated.h already included, missing '#pragma once' in SnakeGamePickUpComponent.h"
#endif
#define SNAKEGAME_SnakeGamePickUpComponent_generated_h

#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_12_DELEGATE \
SNAKEGAME_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ASnakeGameCharacter* PickUpCharacter);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnakeGamePickUpComponent(); \
	friend struct Z_Construct_UClass_USnakeGamePickUpComponent_Statics; \
public: \
	DECLARE_CLASS(USnakeGamePickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(USnakeGamePickUpComponent)


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnakeGamePickUpComponent(USnakeGamePickUpComponent&&); \
	USnakeGamePickUpComponent(const USnakeGamePickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnakeGamePickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnakeGamePickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USnakeGamePickUpComponent) \
	NO_API virtual ~USnakeGamePickUpComponent();


#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_14_PROLOG
#define FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class USnakeGamePickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakeGamePickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
