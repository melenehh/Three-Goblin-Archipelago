#pragma once
#include "CoreMinimal.h"
#include "EOptimusDataTypeUsageFlags.generated.h"

UENUM(BlueprintType)
enum class EOptimusDataTypeUsageFlags : uint8 {
    None,
    Resource,
    Variable,
    AnimAttributes = 4,
};

