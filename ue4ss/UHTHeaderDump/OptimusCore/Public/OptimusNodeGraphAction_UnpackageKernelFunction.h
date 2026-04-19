#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_UnpackageKernelFunction.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_UnpackageKernelFunction();
};

