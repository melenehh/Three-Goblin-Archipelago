#pragma once
#include "CoreMinimal.h"
#include "EShadowCacheInvalidationBehavior.generated.h"

UENUM(BlueprintType)
enum class EShadowCacheInvalidationBehavior : uint8 {
    Auto,
    Always,
    Rigid,
    Static,
};

