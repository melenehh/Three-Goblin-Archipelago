#pragma once
#include "CoreMinimal.h"
#include "EXRTrackedDeviceType.generated.h"

UENUM(BlueprintType)
enum class EXRTrackedDeviceType : uint8 {
    HeadMountedDisplay,
    Controller,
    TrackingReference,
    Tracker,
    Other,
    Invalid = 254,
    Any,
};

