#pragma once
#include "CoreMinimal.h"
#include "ENDISceneCapture2DOffsetMode.generated.h"

UENUM(BlueprintType)
enum class ENDISceneCapture2DOffsetMode : uint8 {
    Disabled,
    RelativeLocal,
    RelativeWorld,
    AbsoluteWorld,
};

