#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonUVDistributionMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonUVDistributionMode : uint8 {
    ScaledUniformly,
    ScaledUsingRibbonSegmentLength,
    TiledOverRibbonLength,
    TiledFromStartOverRibbonLength,
};

