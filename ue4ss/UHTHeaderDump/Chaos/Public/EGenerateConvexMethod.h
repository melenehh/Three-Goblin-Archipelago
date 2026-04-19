#pragma once
#include "CoreMinimal.h"
#include "EGenerateConvexMethod.generated.h"

UENUM(BlueprintType)
enum class EGenerateConvexMethod : uint8 {
    ExternalCollision,
    ComputedFromGeometry,
    IntersectExternalWithComputed,
};

