#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusVariableAction_RenameVariable.generated.h"

USTRUCT(BlueprintType)
struct FOptimusVariableAction_RenameVariable : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusVariableAction_RenameVariable();
};

