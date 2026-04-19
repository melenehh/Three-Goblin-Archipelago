#pragma once
#include "CoreMinimal.h"
#include "ENiagraDataChannel_IslandMode.generated.h"

UENUM(BlueprintType)
enum class ENiagraDataChannel_IslandMode : uint8 {
    AlignedStatic,
    Dynamic,
};

