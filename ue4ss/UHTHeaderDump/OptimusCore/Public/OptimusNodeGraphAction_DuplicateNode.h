#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_DuplicateNode.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_DuplicateNode();
};

