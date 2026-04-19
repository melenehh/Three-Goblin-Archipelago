#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_MovePin.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_MovePin : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_MovePin();
};

