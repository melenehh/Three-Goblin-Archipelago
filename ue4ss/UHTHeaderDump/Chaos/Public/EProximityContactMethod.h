#pragma once
#include "CoreMinimal.h"
#include "EProximityContactMethod.generated.h"

UENUM(BlueprintType)
enum class EProximityContactMethod : uint8 {
    MinOverlapInProjectionToMajorAxes,
    ConvexHullSharpContact,
    ConvexHullAreaContact,
};

