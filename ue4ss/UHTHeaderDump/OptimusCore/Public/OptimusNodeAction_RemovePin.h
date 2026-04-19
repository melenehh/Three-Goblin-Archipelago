#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeAction_AddRemovePin.h"
#include "OptimusNodeAction_RemovePin.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_RemovePin();
};

