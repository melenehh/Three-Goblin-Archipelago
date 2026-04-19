#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceTriggerMask.generated.h"

UENUM(BlueprintType)
enum class EInputDeviceTriggerMask : uint8 {
    None,
    Left,
    Right,
    All,
};

