// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePawn() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBodyPart_NoRegister();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePawn();
SNAKEGAME_API UClass* Z_Construct_UClass_ASnakePawn_NoRegister();
SNAKEGAME_API UEnum* Z_Construct_UEnum_SnakeGame_ESnakeDirection();
UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References

// Begin Class ASnakePawn Function AteApple
struct Z_Construct_UFunction_ASnakePawn_AteApple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_AteApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "AteApple", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_AteApple_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_AteApple_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASnakePawn_AteApple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_AteApple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execAteApple)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AteApple();
	P_NATIVE_END;
}
// End Class ASnakePawn Function AteApple

// Begin Class ASnakePawn Function Jump
struct Z_Construct_UFunction_ASnakePawn_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_Jump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASnakePawn_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump();
	P_NATIVE_END;
}
// End Class ASnakePawn Function Jump

// Begin Class ASnakePawn Function MoveSnake
struct Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics
{
	struct SnakePawn_eventMoveSnake_Parms
	{
		float Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves the snake based on UpdateMovement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakePawn_eventMoveSnake_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "MoveSnake", nullptr, nullptr, Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::SnakePawn_eventMoveSnake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::SnakePawn_eventMoveSnake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakePawn_MoveSnake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_MoveSnake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execMoveSnake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveSnake(Z_Param_Distance);
	P_NATIVE_END;
}
// End Class ASnakePawn Function MoveSnake

// Begin Class ASnakePawn Function OnCollision
struct Z_Construct_UFunction_ASnakePawn_OnCollision_Statics
{
	struct SnakePawn_eventOnCollision_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakePawn_eventOnCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "OnCollision", nullptr, nullptr, Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::SnakePawn_eventOnCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::SnakePawn_eventOnCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakePawn_OnCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_OnCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execOnCollision)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCollision(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ASnakePawn Function OnCollision

// Begin Class ASnakePawn Function QueueNewDirection
struct Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics
{
	struct SnakePawn_eventQueueNewDirection_Parms
	{
		ESnakeDirection InDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakePawn_eventQueueNewDirection_Parms, InDirection), Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(0, nullptr) }; // 214707847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::NewProp_InDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::NewProp_InDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "QueueNewDirection", nullptr, nullptr, Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::SnakePawn_eventQueueNewDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::SnakePawn_eventQueueNewDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakePawn_QueueNewDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_QueueNewDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execQueueNewDirection)
{
	P_GET_ENUM(ESnakeDirection,Z_Param_InDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueNewDirection(ESnakeDirection(Z_Param_InDirection));
	P_NATIVE_END;
}
// End Class ASnakePawn Function QueueNewDirection

// Begin Class ASnakePawn Function RotateSnake
struct Z_Construct_UFunction_ASnakePawn_RotateSnake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotates the snake visually." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_RotateSnake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "RotateSnake", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_RotateSnake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_RotateSnake_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASnakePawn_RotateSnake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_RotateSnake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execRotateSnake)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateSnake();
	P_NATIVE_END;
}
// End Class ASnakePawn Function RotateSnake

// Begin Class ASnakePawn Function UpdateDirection
struct Z_Construct_UFunction_ASnakePawn_UpdateDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the snake's direction in the center of tiles." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_UpdateDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "UpdateDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_UpdateDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_UpdateDirection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASnakePawn_UpdateDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_UpdateDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execUpdateDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDirection();
	P_NATIVE_END;
}
// End Class ASnakePawn Function UpdateDirection

// Begin Class ASnakePawn Function UpdateMovement
struct Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics
{
	struct SnakePawn_eventUpdateMovement_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakePawn_eventUpdateMovement_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "UpdateMovement", nullptr, nullptr, Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::SnakePawn_eventUpdateMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::SnakePawn_eventUpdateMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASnakePawn_UpdateMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_UpdateMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASnakePawn::execUpdateMovement)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMovement(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ASnakePawn Function UpdateMovement

// Begin Class ASnakePawn
void ASnakePawn::StaticRegisterNativesASnakePawn()
{
	UClass* Class = ASnakePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AteApple", &ASnakePawn::execAteApple },
		{ "Jump", &ASnakePawn::execJump },
		{ "MoveSnake", &ASnakePawn::execMoveSnake },
		{ "OnCollision", &ASnakePawn::execOnCollision },
		{ "QueueNewDirection", &ASnakePawn::execQueueNewDirection },
		{ "RotateSnake", &ASnakePawn::execRotateSnake },
		{ "UpdateDirection", &ASnakePawn::execUpdateDirection },
		{ "UpdateMovement", &ASnakePawn::execUpdateMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakePawn);
UClass* Z_Construct_UClass_ASnakePawn_NoRegister()
{
	return ASnakePawn::StaticClass();
}
struct Z_Construct_UClass_ASnakePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SnakePawn.h" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SnakePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Root of the blueprint\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root of the blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "SnakePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SnakePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Head of the snake\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Head of the snake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction the snake will move in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyPartClass_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of the snake in cm/second." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionQueue_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The next Directions to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovedTileDistance_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance the snake has moved within a tile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBodyPart_MetaData[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMap_MetaData[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an ESnakeDirection to an FRotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMap_MetaData[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an ESnakeDirection to an FVector3d." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseMap_MetaData[] = {
		{ "ModuleRelativePath", "SnakePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the opposite Direction of an ESnakeDirection." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BodyPartClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionQueue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectionQueue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovedTileDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildBodyPart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RotationMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpeedMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InverseMap_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InverseMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InverseMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InverseMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InverseMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakePawn_AteApple, "AteApple" }, // 3502540125
		{ &Z_Construct_UFunction_ASnakePawn_Jump, "Jump" }, // 3694517731
		{ &Z_Construct_UFunction_ASnakePawn_MoveSnake, "MoveSnake" }, // 2773443987
		{ &Z_Construct_UFunction_ASnakePawn_OnCollision, "OnCollision" }, // 1542078409
		{ &Z_Construct_UFunction_ASnakePawn_QueueNewDirection, "QueueNewDirection" }, // 644784545
		{ &Z_Construct_UFunction_ASnakePawn_RotateSnake, "RotateSnake" }, // 3127841599
		{ &Z_Construct_UFunction_ASnakePawn_UpdateDirection, "UpdateDirection" }, // 662243549
		{ &Z_Construct_UFunction_ASnakePawn_UpdateMovement, "UpdateMovement" }, // 1028204094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, Direction), Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 214707847
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_BodyPartClass = { "BodyPartClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, BodyPartClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASnakeBodyPart_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyPartClass_MetaData), NewProp_BodyPartClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_DirectionQueue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_DirectionQueue_Inner = { "DirectionQueue", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(0, nullptr) }; // 214707847
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_DirectionQueue = { "DirectionQueue", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, DirectionQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionQueue_MetaData), NewProp_DirectionQueue_MetaData) }; // 214707847
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_MovedTileDistance = { "MovedTileDistance", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, MovedTileDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovedTileDistance_MetaData), NewProp_MovedTileDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_ChildBodyPart = { "ChildBodyPart", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, ChildBodyPart), Z_Construct_UClass_ASnakeBodyPart_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBodyPart_MetaData), NewProp_ChildBodyPart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap_ValueProp = { "RotationMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap_Key_KeyProp = { "RotationMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(0, nullptr) }; // 214707847
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap = { "RotationMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, RotationMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMap_MetaData), NewProp_RotationMap_MetaData) }; // 214707847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap_ValueProp = { "SpeedMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap_Key_KeyProp = { "SpeedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(0, nullptr) }; // 214707847
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap = { "SpeedMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, SpeedMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMap_MetaData), NewProp_SpeedMap_MetaData) }; // 214707847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_ValueProp = { "InverseMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(0, nullptr) }; // 214707847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_Key_KeyProp = { "InverseMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SnakeGame_ESnakeDirection, METADATA_PARAMS(0, nullptr) }; // 214707847
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap = { "InverseMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakePawn, InverseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseMap_MetaData), NewProp_InverseMap_MetaData) }; // 214707847 214707847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_BodyPartClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_DirectionQueue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_DirectionQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_DirectionQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_MovedTileDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_ChildBodyPart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_RotationMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SpeedMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_InverseMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakePawn_Statics::ClassParams = {
	&ASnakePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASnakePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakePawn()
{
	if (!Z_Registration_Info_UClass_ASnakePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakePawn.OuterSingleton, Z_Construct_UClass_ASnakePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakePawn.OuterSingleton;
}
template<> SNAKEGAME_API UClass* StaticClass<ASnakePawn>()
{
	return ASnakePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakePawn);
ASnakePawn::~ASnakePawn() {}
// End Class ASnakePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakePawn, ASnakePawn::StaticClass, TEXT("ASnakePawn"), &Z_Registration_Info_UClass_ASnakePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakePawn), 405385932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_420923900(TEXT("/Script/SnakeGame"),
	Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_UnrealSnake_SnakeGame_Source_SnakeGame_SnakePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
