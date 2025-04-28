// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Definitions.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_Definitions_generated_h
#error "Definitions.generated.h already included, missing '#pragma once' in Definitions.h"
#endif
#define SNAKEGAME_Definitions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Linus_Jernstrom_Documents_GitHub_UnrealSnake_SnakeGame_Source_SnakeGame_Definitions_h


#define FOREACH_ENUM_ESNAKEDIRECTION(op) \
	op(ESnakeDirection::Left) \
	op(ESnakeDirection::Down) \
	op(ESnakeDirection::Up) \
	op(ESnakeDirection::Right) \
	op(ESnakeDirection::None) 

enum class ESnakeDirection : uint8;
template<> struct TIsUEnumClass<ESnakeDirection> { enum { Value = true }; };
template<> SNAKEGAME_API UEnum* StaticEnum<ESnakeDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
