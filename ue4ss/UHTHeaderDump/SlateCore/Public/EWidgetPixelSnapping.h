#pragma once
#include "CoreMinimal.h"
#include "EWidgetPixelSnapping.generated.h"

UENUM(BlueprintType)
enum class EWidgetPixelSnapping : uint8 {
    Inherit,
    Disabled,
    SnapToPixel,
};

