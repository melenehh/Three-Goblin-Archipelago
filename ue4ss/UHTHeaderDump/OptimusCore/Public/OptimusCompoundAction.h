#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusCompoundAction.generated.h"

USTRUCT(BlueprintType)
struct FOptimusCompoundAction : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusCompoundAction();
};

