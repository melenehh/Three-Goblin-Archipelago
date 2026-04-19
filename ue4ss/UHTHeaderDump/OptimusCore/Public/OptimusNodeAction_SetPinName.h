#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_SetPinName.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_SetPinName : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_SetPinName();
};

