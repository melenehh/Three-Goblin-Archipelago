#pragma once
#include "CoreMinimal.h"
#include "ELandscapeToolTargetType.generated.h"

UENUM(BlueprintType)
enum class ELandscapeToolTargetType : uint8 {
    Heightmap,
    Weightmap,
    Visibility,
    Invalid,
};

