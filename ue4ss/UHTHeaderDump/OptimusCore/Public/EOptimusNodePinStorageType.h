#pragma once
#include "CoreMinimal.h"
#include "EOptimusNodePinStorageType.generated.h"

UENUM(BlueprintType)
enum class EOptimusNodePinStorageType : uint8 {
    Value,
    Resource,
};

