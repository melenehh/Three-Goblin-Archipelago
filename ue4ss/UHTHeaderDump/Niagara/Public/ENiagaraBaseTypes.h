#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBaseTypes.generated.h"

UENUM(BlueprintType)
enum class ENiagaraBaseTypes : uint8 {
    Half,
    Float,
    Int32,
    Bool,
    Max,
};

