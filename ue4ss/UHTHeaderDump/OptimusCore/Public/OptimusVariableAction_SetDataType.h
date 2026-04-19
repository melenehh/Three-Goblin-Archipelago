#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusVariableAction_SetDataType.generated.h"

USTRUCT(BlueprintType)
struct FOptimusVariableAction_SetDataType : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusVariableAction_SetDataType();
};

