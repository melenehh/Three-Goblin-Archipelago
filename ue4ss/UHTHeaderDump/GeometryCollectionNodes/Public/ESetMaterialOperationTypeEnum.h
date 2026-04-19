#pragma once
#include "CoreMinimal.h"
#include "ESetMaterialOperationTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESetMaterialOperationTypeEnum : uint8 {
    Dataflow_SetMaterialOperationType_Add,
    Dataflow_SetMaterialOperationType_Insert,
};

