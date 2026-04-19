#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_AddNode.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_AddNode : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_AddNode();
};

