#pragma once
#include "CoreMinimal.h"
#include "EModulationDestination.generated.h"

UENUM(BlueprintType)
enum class EModulationDestination : uint8 {
    Volume,
    Pitch,
    Lowpass,
    Highpass,
    Count,
};

