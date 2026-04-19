#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusComponentBindingAction_RenameBinding.generated.h"

USTRUCT(BlueprintType)
struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusComponentBindingAction_RenameBinding();
};

