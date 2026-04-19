#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeAnimationPayLoadType : uint8 {
    NONE,
    CURVE,
    MORPHTARGETCURVE,
    STEPCURVE,
    BAKED,
    MORPHTARGETCURVEWEIGHTINSTANCE,
};

