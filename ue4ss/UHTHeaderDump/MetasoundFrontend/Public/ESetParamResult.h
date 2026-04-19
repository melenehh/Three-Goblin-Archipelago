#pragma once
#include "CoreMinimal.h"
#include "ESetParamResult.generated.h"

UENUM(BlueprintType)
enum class ESetParamResult : uint8 {
    Succeeded,
    Failed,
};

