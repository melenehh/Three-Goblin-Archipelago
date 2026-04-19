#pragma once
#include "CoreMinimal.h"
#include "EProximityContactFilteringMethodEnum.generated.h"

UENUM(BlueprintType)
enum class EProximityContactFilteringMethodEnum : uint8 {
    Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap,
    Dataflow_ProximityContactFilteringMethod_ConvexHullSharp,
    Dataflow_ProximityContactFilteringMethod_ConvexHullArea,
};

