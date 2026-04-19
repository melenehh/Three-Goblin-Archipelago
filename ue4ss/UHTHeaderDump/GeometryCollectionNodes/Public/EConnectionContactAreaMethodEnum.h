#pragma once
#include "CoreMinimal.h"
#include "EConnectionContactAreaMethodEnum.generated.h"

UENUM(BlueprintType)
enum class EConnectionContactAreaMethodEnum : uint8 {
    Dataflow_ConnectionContactAreaMethod_None,
    Dataflow_ProximityContactFilteringMethod_ConvexHullArea,
};

