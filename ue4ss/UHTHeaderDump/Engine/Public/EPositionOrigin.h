#pragma once
#include "CoreMinimal.h"
#include "EPositionOrigin.generated.h"

UENUM(BlueprintType)
enum class EPositionOrigin : uint8 {
    Absolute,
    CameraRelative,
};

