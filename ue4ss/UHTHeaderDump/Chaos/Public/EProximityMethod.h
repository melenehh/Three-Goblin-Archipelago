#pragma once
#include "CoreMinimal.h"
#include "EProximityMethod.generated.h"

UENUM(BlueprintType)
enum class EProximityMethod : uint8 {
    Precise,
    ConvexHull,
};

