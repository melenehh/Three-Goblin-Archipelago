#pragma once
#include "CoreMinimal.h"
#include "ENavigationInvokerPriority.generated.h"

UENUM(BlueprintType)
enum class ENavigationInvokerPriority : uint8 {
    VeryLow = 1,
    Low,
    Default,
    High,
    VeryHigh,
    MAX,
};

