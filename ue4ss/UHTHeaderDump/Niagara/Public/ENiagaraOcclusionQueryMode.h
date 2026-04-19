#pragma once
#include "CoreMinimal.h"
#include "ENiagaraOcclusionQueryMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraOcclusionQueryMode : uint8 {
    Default,
    AlwaysEnabled,
    AlwaysDisabled,
};

