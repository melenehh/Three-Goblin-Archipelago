#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCurveInterpMode.generated.h"

UENUM(BlueprintType)
enum class EInterchangeCurveInterpMode : uint8 {
    Linear,
    Constant,
    Cubic,
    None,
};

