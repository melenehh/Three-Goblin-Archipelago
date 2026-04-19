#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionServerStreamingOutMode.generated.h"

UENUM(BlueprintType)
enum class EWorldPartitionServerStreamingOutMode : uint8 {
    ProjectDefault,
    Disabled,
    Enabled,
};

