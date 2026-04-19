#pragma once
#include "CoreMinimal.h"
#include "ENiagaraInlineDynamicInputFormatTokenUsage.generated.h"

UENUM(BlueprintType)
enum class ENiagaraInlineDynamicInputFormatTokenUsage : uint8 {
    Input,
    Decorator,
    LineBreak,
};

