#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeDataFlags.generated.h"

UENUM(BlueprintType)
enum class EAnimNodeDataFlags : uint8 {
    None,
    HasInitialUpdateFunction,
    HasBecomeRelevantFunction,
    HasUpdateFunction = 4,
};

