#pragma once
#include "CoreMinimal.h"
#include "EMediaPlateEventState.generated.h"

UENUM(BlueprintType)
enum class EMediaPlateEventState : uint8 {
    Play,
    Open,
    Close,
    Pause,
    Reverse,
    Forward,
    Rewind,
    MAX,
};

