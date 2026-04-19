#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusComponentBindingAction_AddBinding.generated.h"

USTRUCT(BlueprintType)
struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusComponentBindingAction_AddBinding();
};

