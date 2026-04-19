#pragma once
#include "CoreMinimal.h"
#include "EFloatArrayToIntArrayFunctionEnum.generated.h"

UENUM(BlueprintType)
enum class EFloatArrayToIntArrayFunctionEnum : uint8 {
    Dataflow_FloatToInt_Function_Floor,
    Dataflow_FloatToInt_Function_Ceil,
    Dataflow_FloatToInt_Function_Round,
    Dataflow_FloatToInt_Function_Truncate,
    Dataflow_FloatToInt_NonZeroToIndex,
    Dataflow_FloatToInt_ZeroToIndex,
};

