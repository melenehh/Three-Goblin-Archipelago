#pragma once
#include "CoreMinimal.h"
#include "ENDIDataChannelSpawnMode.generated.h"

UENUM(BlueprintType)
enum class ENDIDataChannelSpawnMode : uint8 {
    Override,
    Accumulate,
    None,
    Max,
};

