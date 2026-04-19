#pragma once
#include "CoreMinimal.h"
#include "ECompareOperation1Enum.generated.h"

UENUM(BlueprintType)
enum class ECompareOperation1Enum : uint8 {
    Dataflow_Compare_Equal,
    Dataflow_Compare_Smaller,
    Dataflow_Compare_SmallerOrEqual,
    Dataflow_Compare_Greater,
    Dataflow_Compare_GreaterOrEqual,
};

