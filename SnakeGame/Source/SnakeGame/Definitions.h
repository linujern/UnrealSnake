#pragma once

UENUM(BlueprintType)
enum class ESnakeDirection : uint8 {
	Left = 0,
	Down = 1,
	Up = 2,
	Right = 3,
	None = 255
};

constexpr float TileSize = 100.0f;

static FORCEINLINE TMap<ESnakeDirection, FRotator> CreateRotationMap() {
	TMap<ESnakeDirection, FRotator> Map;
	Map.Add(ESnakeDirection::Left, FRotator(0.0f, -90.f, 0.0f));
	Map.Add(ESnakeDirection::Down, FRotator(0.f, 180.f, 0.0f));
	Map.Add(ESnakeDirection::Up, FRotator(0.0f, 0.0f, 0.0f));
	Map.Add(ESnakeDirection::Right, FRotator(0.0f, 90.f, 0.0f));
	Map.Add(ESnakeDirection::None, FRotator::ZeroRotator);
	return Map;
}

static FORCEINLINE TMap<ESnakeDirection, FVector3d> CreateSpeedMap() {
	TMap<ESnakeDirection, FVector3d> Map;
	Map.Add(ESnakeDirection::Left, FVector3d(0.0f, -1.0f, 0.0f));
	Map.Add(ESnakeDirection::Down, FVector3d(-1.0f, 0.0f, 0.0f));
	Map.Add(ESnakeDirection::Up, FVector3d(1.0f, 0.0f, 0.0f));
	Map.Add(ESnakeDirection::Right, FVector3d(0.0f, 1.0f, 0.0f));
	Map.Add(ESnakeDirection::None, FVector3d::Zero());
	return Map;
}

static FORCEINLINE TMap<ESnakeDirection, ESnakeDirection> CreateInverseMap() {
	TMap<ESnakeDirection, ESnakeDirection> Map;
	Map.Add(ESnakeDirection::Left, ESnakeDirection::Right);
	Map.Add(ESnakeDirection::Down, ESnakeDirection::Up);
	Map.Add(ESnakeDirection::Up, ESnakeDirection::Down);
	Map.Add(ESnakeDirection::Right, ESnakeDirection::Left);
	Map.Add(ESnakeDirection::None, ESnakeDirection::None);
	return Map;
}