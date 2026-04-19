#pragma once
#include "CoreMinimal.h"
#include "EProximityMethodEnum.generated.h"

UENUM(BlueprintType)
enum class EProximityMethodEnum : uint8 {
    Dataflow_ProximityMethod_Precise,
    Dataflow_ProximityMethod_ConvexHull,
};

