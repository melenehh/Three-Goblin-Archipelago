#pragma once
#include "CoreMinimal.h"
#include "EPhysicsReplicationMode.generated.h"

UENUM(BlueprintType)
enum class EPhysicsReplicationMode : uint8 {
    Default,
    PredictiveInterpolation,
    Resimulation,
};

