#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonUVEdgeMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonUVEdgeMode : uint8 {
    SmoothTransition,
    Locked,
};

