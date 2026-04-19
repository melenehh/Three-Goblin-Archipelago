#pragma once
#include "CoreMinimal.h"
#include "ESpawnActorScaleMethod.generated.h"

UENUM(BlueprintType)
enum class ESpawnActorScaleMethod : uint8 {
    OverrideRootScale,
    MultiplyWithRoot,
    SelectDefaultAtRuntime,
};

