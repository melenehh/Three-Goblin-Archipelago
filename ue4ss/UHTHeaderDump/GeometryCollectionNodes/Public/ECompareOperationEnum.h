#pragma once
#include "CoreMinimal.h"
#include "ECompareOperationEnum.generated.h"

UENUM(BlueprintType)
enum class ECompareOperationEnum : uint8 {
    Dataflow_Compare_Equal,
    Dataflow_Compare_Smaller,
    Dataflow_Compare_SmallerOrEqual,
    Dataflow_Compare_Greater,
    Dataflow_Compare_GreaterOrEqual,
};

