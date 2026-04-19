#pragma once
#include "CoreMinimal.h"
#include "EOptimusDataTypeFlags.generated.h"

UENUM(BlueprintType)
enum class EOptimusDataTypeFlags : uint8 {
    None,
    IsStructType,
    ShowElements,
};

