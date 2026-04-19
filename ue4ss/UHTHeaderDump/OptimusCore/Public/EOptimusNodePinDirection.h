#pragma once
#include "CoreMinimal.h"
#include "EOptimusNodePinDirection.generated.h"

UENUM(BlueprintType)
enum class EOptimusNodePinDirection : uint8 {
    Unknown,
    Input,
    Output,
};

