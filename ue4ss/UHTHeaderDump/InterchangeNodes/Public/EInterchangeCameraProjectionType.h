#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCameraProjectionType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeCameraProjectionType : uint8 {
    Perspective,
    Orthographic,
};

