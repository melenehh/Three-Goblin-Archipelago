#pragma once
#include "CoreMinimal.h"
#include "EDataflowFloatFieldOperationType.generated.h"

UENUM(BlueprintType)
enum class EDataflowFloatFieldOperationType : uint8 {
    Dataflow_FloatFieldOperationType_Multiply,
    Dataflow_FloatFieldFalloffType_Divide,
    Dataflow_FloatFieldFalloffType_Add,
    Dataflow_FloatFieldFalloffType_Substract,
    Dataflow_FloatFieldFalloffType_Min,
    Dataflow_FloatFieldFalloffType_Max UMETA(Hidden),
};

