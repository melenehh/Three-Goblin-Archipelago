#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_SetPinType.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_SetPinType : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_SetPinType();
};

