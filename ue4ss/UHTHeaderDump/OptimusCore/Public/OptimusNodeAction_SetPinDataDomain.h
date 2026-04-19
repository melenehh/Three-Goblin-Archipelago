#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeAction_SetPinDataDomain.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeAction_SetPinDataDomain();
};

