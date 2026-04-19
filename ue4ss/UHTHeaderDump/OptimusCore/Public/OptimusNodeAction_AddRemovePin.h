#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_AddRemovePin.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_AddRemovePin : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_AddRemovePin();
};

