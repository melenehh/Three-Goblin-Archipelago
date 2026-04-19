#pragma once
#include "CoreMinimal.h"
#include "EInterchangeSkeletalMeshContentType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeSkeletalMeshContentType : uint8 {
    All,
    Geometry,
    SkinningWeights,
    MAX,
};

