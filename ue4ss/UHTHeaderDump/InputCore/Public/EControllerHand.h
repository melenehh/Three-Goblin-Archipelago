#pragma once
#include "CoreMinimal.h"
#include "EControllerHand.generated.h"

UENUM(BlueprintType)
enum class EControllerHand : uint8 {
    Left,
    Right,
    AnyHand,
    Pad,
    ExternalCamera,
    Gun,
    HMD,
    Chest,
    LeftShoulder,
    RightShoulder,
    LeftElbow,
    RightElbow,
    Waist,
    LeftKnee,
    RightKnee,
    LeftFoot,
    RightFoot,
    Special,
    ControllerHand_Count,
};

