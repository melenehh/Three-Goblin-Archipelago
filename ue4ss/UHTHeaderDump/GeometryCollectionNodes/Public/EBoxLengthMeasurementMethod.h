#pragma once
#include "CoreMinimal.h"
#include "EBoxLengthMeasurementMethod.generated.h"

UENUM(BlueprintType)
enum class EBoxLengthMeasurementMethod : uint8 {
    XAxis,
    YAxis,
    ZAxis,
    ShortestAxis,
    LongestAxis,
    Diagonal,
};

