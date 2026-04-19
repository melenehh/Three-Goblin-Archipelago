#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCurveTangentWeightMode.generated.h"

UENUM(BlueprintType)
enum class EInterchangeCurveTangentWeightMode : uint8 {
    WeightedNone,
    WeightedArrive,
    WeightedLeave,
    WeightedBoth,
};

