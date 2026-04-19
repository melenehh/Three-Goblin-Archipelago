#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_PackageKernelFunction.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_PackageKernelFunction();
};

