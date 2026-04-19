#pragma once
#include "CoreMinimal.h"
#include "ENavigationDataResolution.generated.h"

UENUM(BlueprintType)
enum class ENavigationDataResolution : uint8 {
    Low,
    Default,
    High,
    Invalid,
    MAX = Invalid,
};

