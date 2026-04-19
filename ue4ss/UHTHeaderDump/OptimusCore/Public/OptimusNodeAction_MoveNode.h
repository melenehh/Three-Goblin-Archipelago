#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_MoveNode.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_MoveNode : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_MoveNode();
};

