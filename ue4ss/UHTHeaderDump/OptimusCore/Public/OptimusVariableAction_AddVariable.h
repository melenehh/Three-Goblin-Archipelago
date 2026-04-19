#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusVariableAction_AddVariable.generated.h"

USTRUCT(BlueprintType)
struct FOptimusVariableAction_AddVariable : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusVariableAction_AddVariable();
};

