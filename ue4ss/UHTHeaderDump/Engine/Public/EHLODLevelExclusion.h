#pragma once
#include "CoreMinimal.h"
#include "EHLODLevelExclusion.generated.h"

UENUM(BlueprintType)
enum class EHLODLevelExclusion : uint8 {
    HLOD0 = 1,
    HLOD1,
    HLOD2 = 4,
    HLOD3 = 8,
    HLOD4 = 16,
    HLOD5 = 32,
    HLOD6 = 64,
    HLOD7 = 128,
};

