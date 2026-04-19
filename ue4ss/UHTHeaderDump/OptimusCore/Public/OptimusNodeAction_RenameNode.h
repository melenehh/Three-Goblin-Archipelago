#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_RenameNode.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_RenameNode : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_RenameNode();
};

