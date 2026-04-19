#pragma once
#include "CoreMinimal.h"
#include "ETriggerEvent.generated.h"

UENUM(BlueprintType)
enum class ETriggerEvent : uint8 {
    None,
    Triggered,
    Started,
    Ongoing = 4,
    Canceled = 8,
    Completed = 16,
};

