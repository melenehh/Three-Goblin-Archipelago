#pragma once
#include "CoreMinimal.h"
#include "EHardwareDeviceSupportedFeatures.generated.h"

UENUM(BlueprintType)
namespace EHardwareDeviceSupportedFeatures {
    enum Type {
        Unspecified,
        Keypress,
        Pointer,
        Gamepad = 4,
        Touch = 8,
        Camera = 16,
        MotionTracking = 32,
        Lights = 64,
        TriggerHaptics = 128,
        ForceFeedback = 256,
        AudioBasedVibrations = 512,
        Acceleration = 1024,
        Virtual = 2048,
        Microphone = 4096,
        Orientation = 8192,
        CustomA = 16777216,
        CustomB = 33554432,
        CustomC = 67108864,
        CustomD = 134217728,
        All = 2147483647,
    };
}

