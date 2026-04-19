#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusVariableAction_RemoveVariable.generated.h"

USTRUCT(BlueprintType)
struct FOptimusVariableAction_RemoveVariable : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusVariableAction_RemoveVariable();
};

