#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_RemoveNode.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_RemoveNode();
};

