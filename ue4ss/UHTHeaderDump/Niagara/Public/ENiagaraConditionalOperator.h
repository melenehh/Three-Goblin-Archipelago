#pragma once
#include "CoreMinimal.h"
#include "ENiagaraConditionalOperator.generated.h"

UENUM(BlueprintType)
enum class ENiagaraConditionalOperator : uint8 {
    Equals,
    NotEqual,
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
    Max,
};

