#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionServerStreamingMode.generated.h"

UENUM(BlueprintType)
enum class EWorldPartitionServerStreamingMode : uint8 {
    ProjectDefault,
    Disabled,
    Enabled,
    EnabledInPIE,
};

