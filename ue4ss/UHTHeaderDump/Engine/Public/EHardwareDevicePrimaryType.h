#pragma once
#include "CoreMinimal.h"
#include "EHardwareDevicePrimaryType.generated.h"

UENUM(BlueprintType)
enum class EHardwareDevicePrimaryType : uint8 {
    Unspecified,
    KeyboardAndMouse,
    Gamepad,
    Touch,
    MotionTracking,
    RacingWheel,
    FlightStick,
    Camera,
    Instrument,
    CustomTypeA,
    CustomTypeB,
    CustomTypeC,
    CustomTypeD,
};

