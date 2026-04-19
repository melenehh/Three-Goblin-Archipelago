#pragma once
#include "CoreMinimal.h"
#include "EToolShutdownType.generated.h"

UENUM(BlueprintType)
enum class EToolShutdownType : uint8 {
    Completed,
    Accept,
    Cancel,
};

