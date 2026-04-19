#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusResourceAction_RenameResource.generated.h"

USTRUCT(BlueprintType)
struct FOptimusResourceAction_RenameResource : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusResourceAction_RenameResource();
};

