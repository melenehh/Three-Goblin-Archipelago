#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_AddRemoveLink.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_AddRemoveLink();
};

