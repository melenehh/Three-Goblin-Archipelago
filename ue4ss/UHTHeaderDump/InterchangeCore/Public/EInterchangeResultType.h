#pragma once
#include "CoreMinimal.h"
#include "EInterchangeResultType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeResultType : uint8 {
    Success,
    Warning,
    Error,
};

