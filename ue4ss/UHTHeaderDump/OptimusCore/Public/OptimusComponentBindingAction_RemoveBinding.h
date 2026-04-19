#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusComponentBindingAction_RemoveBinding.generated.h"

USTRUCT(BlueprintType)
struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusComponentBindingAction_RemoveBinding();
};

