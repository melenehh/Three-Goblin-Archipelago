#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeAction_AddRemovePin.h"
#include "OptimusNodeAction_AddPin.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_AddPin();
};

