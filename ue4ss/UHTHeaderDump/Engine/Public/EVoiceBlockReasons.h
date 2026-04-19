#pragma once
#include "CoreMinimal.h"
#include "EVoiceBlockReasons.generated.h"

UENUM(BlueprintType)
enum class EVoiceBlockReasons : uint8 {
    None,
    Muted,
    Gameplay,
    Blocked = 4,
    BlockedBy = 8,
};

