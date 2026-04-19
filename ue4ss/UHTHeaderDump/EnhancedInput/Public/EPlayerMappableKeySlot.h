#pragma once
#include "CoreMinimal.h"
#include "EPlayerMappableKeySlot.generated.h"

UENUM(BlueprintType)
enum class EPlayerMappableKeySlot : uint8 {
    First,
    Second,
    Third,
    Fourth,
    Fifth,
    Sixth,
    Seventh,
    Unspecified,
    Max,
};

