#pragma once
#include "CoreMinimal.h"
#include "EViewStatusForScreenPercentage.generated.h"

UENUM(BlueprintType)
enum class EViewStatusForScreenPercentage : uint8 {
    NonRealtime,
    Desktop,
    Mobile,
    VR,
    PathTracer,
};

