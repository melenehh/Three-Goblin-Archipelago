#pragma once
#include "CoreMinimal.h"
#include "EControlRigTestDataPlaybackMode.generated.h"

UENUM(BlueprintType)
enum class EControlRigTestDataPlaybackMode : uint8 {
    Live,
    ReplayInputs,
    GroundTruth,
    Max,
};

