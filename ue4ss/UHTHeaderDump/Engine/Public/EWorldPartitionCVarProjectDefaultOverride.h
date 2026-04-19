#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionCVarProjectDefaultOverride.generated.h"

UENUM(BlueprintType)
enum class EWorldPartitionCVarProjectDefaultOverride : uint8 {
    ProjectDefault,
    Disabled,
    Enabled,
};

