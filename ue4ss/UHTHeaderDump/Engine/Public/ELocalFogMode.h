#pragma once
#include "CoreMinimal.h"
#include "ELocalFogMode.generated.h"

UENUM(BlueprintType)
enum class ELocalFogMode : uint8 {
    LocalHeightFog,
    LocalSphereFog,
};

