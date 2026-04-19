#pragma once
#include "CoreMinimal.h"
#include "ENaniteFallbackTarget.generated.h"

UENUM(BlueprintType)
enum class ENaniteFallbackTarget : uint8 {
    Auto,
    PercentTriangles,
    RelativeError,
};

