#pragma once
#include "CoreMinimal.h"
#include "EDataflowFieldFalloffType.generated.h"

UENUM(BlueprintType)
enum class EDataflowFieldFalloffType : uint8 {
    Dataflow_FieldFalloffType_None,
    Dataflow_FieldFalloffType_Linear,
    Dataflow_FieldFalloffType_Inverse,
    Dataflow_FieldFalloffType_Squared,
    Dataflow_FieldFalloffType_Logarithmic,
};

