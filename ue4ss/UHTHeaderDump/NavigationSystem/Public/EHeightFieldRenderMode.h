#pragma once
#include "CoreMinimal.h"
#include "EHeightFieldRenderMode.generated.h"

UENUM(BlueprintType)
enum class EHeightFieldRenderMode : uint8 {
    Solid,
    Walkable,
};

