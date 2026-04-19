#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHUDDOverviewSort.generated.h"

UENUM()
enum class ENiagaraDebugHUDDOverviewSort : int32 {
    Name,
    NumberRegistered,
    NumberActive,
    NumberScalability,
    MemoryUsage,
    RecentlyVisibilty,
};

