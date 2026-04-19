#pragma once
#include "CoreMinimal.h"
#include "EAllowConvexMergeMethod.generated.h"

UENUM(BlueprintType)
enum class EAllowConvexMergeMethod : uint8 {
    ByProximity,
    Any,
};

