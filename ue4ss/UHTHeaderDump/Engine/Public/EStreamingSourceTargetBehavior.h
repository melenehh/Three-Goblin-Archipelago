#pragma once
#include "CoreMinimal.h"
#include "EStreamingSourceTargetBehavior.generated.h"

UENUM(BlueprintType)
enum class EStreamingSourceTargetBehavior : uint8 {
    Include,
    Exclude,
};

