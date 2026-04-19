#pragma once
#include "CoreMinimal.h"
#include "EInputActionAccumulationBehavior.generated.h"

UENUM(BlueprintType)
enum class EInputActionAccumulationBehavior : uint8 {
    TakeHighestAbsoluteValue,
    Cumulative,
};

