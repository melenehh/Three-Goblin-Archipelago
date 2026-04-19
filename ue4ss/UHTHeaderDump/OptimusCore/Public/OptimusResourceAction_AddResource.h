#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusResourceAction_AddResource.generated.h"

USTRUCT(BlueprintType)
struct FOptimusResourceAction_AddResource : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusResourceAction_AddResource();
};

