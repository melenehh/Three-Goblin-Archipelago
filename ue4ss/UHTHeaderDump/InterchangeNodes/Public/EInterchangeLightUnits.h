#pragma once
#include "CoreMinimal.h"
#include "EInterchangeLightUnits.generated.h"

UENUM(BlueprintType)
enum class EInterchangeLightUnits : uint8 {
    Unitless,
    Candelas,
    Lumens,
    EV,
};

