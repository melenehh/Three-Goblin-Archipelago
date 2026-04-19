#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusResourceAction_RemoveResource.generated.h"

USTRUCT(BlueprintType)
struct FOptimusResourceAction_RemoveResource : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusResourceAction_RemoveResource();
};

