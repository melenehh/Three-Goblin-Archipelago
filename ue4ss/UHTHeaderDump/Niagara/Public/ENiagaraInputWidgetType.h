#pragma once
#include "CoreMinimal.h"
#include "ENiagaraInputWidgetType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraInputWidgetType : uint8 {
    Default,
    Slider,
    Volume,
    NumericDropdown,
    EnumStyle,
};

