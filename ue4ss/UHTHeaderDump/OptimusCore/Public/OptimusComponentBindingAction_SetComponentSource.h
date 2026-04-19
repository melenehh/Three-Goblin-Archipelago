#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusComponentBindingAction_SetComponentSource.generated.h"

USTRUCT(BlueprintType)
struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusComponentBindingAction_SetComponentSource();
};

