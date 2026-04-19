#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshAttributeChangeFlags.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshAttributeChangeFlags : uint8 {
    Unknown,
    MeshTopology,
    VertexPositions,
    NormalsTangents = 4,
    VertexColors = 8,
    UVs = 16,
    TriangleGroups = 32,
};

