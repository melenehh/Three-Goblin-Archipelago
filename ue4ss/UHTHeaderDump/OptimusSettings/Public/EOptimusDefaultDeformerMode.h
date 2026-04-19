#pragma once
#include "CoreMinimal.h"
#include "EOptimusDefaultDeformerMode.generated.h"

UENUM(BlueprintType)
enum class EOptimusDefaultDeformerMode : uint8 {
    Never,
    SkinCacheOnly,
    Always,
};

