#pragma once
#include "CoreMinimal.h"
#include "ENavigationSortPendingTilesMethod.generated.h"

UENUM(BlueprintType)
enum class ENavigationSortPendingTilesMethod : uint8 {
    SortWithSeedLocations,
    SortByPriority,
    None,
};

