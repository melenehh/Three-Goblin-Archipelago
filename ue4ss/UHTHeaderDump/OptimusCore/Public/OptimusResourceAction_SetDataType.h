#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusResourceAction_SetDataType.generated.h"

USTRUCT(BlueprintType)
struct FOptimusResourceAction_SetDataType : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusResourceAction_SetDataType();
};

