#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusResourceAction_SetDataDomain.generated.h"

USTRUCT(BlueprintType)
struct FOptimusResourceAction_SetDataDomain : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusResourceAction_SetDataDomain();
};

