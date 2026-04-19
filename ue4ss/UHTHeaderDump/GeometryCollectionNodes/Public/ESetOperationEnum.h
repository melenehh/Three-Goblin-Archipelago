#pragma once
#include "CoreMinimal.h"
#include "ESetOperationEnum.generated.h"

UENUM(BlueprintType)
enum class ESetOperationEnum : uint8 {
    Dataflow_SetOperation_AND,
    Dataflow_SetOperation_OR,
    Dataflow_SetOperation_XOR,
};

