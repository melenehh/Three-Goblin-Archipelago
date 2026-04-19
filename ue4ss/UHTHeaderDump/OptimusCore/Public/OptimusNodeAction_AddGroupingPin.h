#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeAction_AddRemovePin.h"
#include "OptimusNodeAction_AddGroupingPin.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_AddGroupingPin();
};

