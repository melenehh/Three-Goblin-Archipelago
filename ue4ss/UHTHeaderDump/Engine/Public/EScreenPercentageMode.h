#pragma once
#include "CoreMinimal.h"
#include "EScreenPercentageMode.generated.h"

UENUM()
enum class EScreenPercentageMode : int32 {
    Manual,
    BasedOnDisplayResolution,
    BasedOnDPIScale,
};

