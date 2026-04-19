#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_SetPinValue.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_SetPinValue : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_SetPinValue();
};

