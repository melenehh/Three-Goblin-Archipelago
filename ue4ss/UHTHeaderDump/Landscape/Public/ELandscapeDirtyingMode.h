#pragma once
#include "CoreMinimal.h"
#include "ELandscapeDirtyingMode.generated.h"

UENUM(BlueprintType)
enum class ELandscapeDirtyingMode : uint8 {
    Auto,
    InLandscapeModeOnly,
    InLandscapeModeAndUserTriggeredChanges,
};

