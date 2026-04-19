#pragma once
#include "CoreMinimal.h"
#include "EDataflowVectorFieldOperationType.generated.h"

UENUM(BlueprintType)
enum class EDataflowVectorFieldOperationType : uint8 {
    Dataflow_VectorFieldOperationType_Multiply,
    Dataflow_VectorFieldFalloffType_Divide,
    Dataflow_VectorFieldFalloffType_Add,
    Dataflow_VectorFieldFalloffType_Substract,
    Dataflow_VectorFieldFalloffType_CrossProduct,
};

