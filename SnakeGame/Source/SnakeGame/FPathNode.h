#pragma once
#include "SnakeWorld.h"
#include "FPathNode.generated.h"

USTRUCT()
struct FPathNode {
	GENERATED_BODY()

public:
	FTile* Tile = nullptr;
	
	float G = TNumericLimits<float>::Max(); // Cost from start
	float H = 0.f; // Heuristic to goal
	float S = 0.f; // Snake distance penalty
	float F = 0.f; // Total

	FPathNode* Parent = nullptr; // To reconstruct path

	FPathNode() {}
	FPathNode(FTile* InTile, float InG = 0.f, float InH = 0.f, float InS = 0.f) : Tile(InTile), G(InG), H(InH), S(InS)
	{
		F = G + H + S;
	}

	bool operator<(const FPathNode& Other) const {
		return F > Other.F; // Min-heap: lower F = higher priority
	}
};
