#pragma once
#include "CoreMinimal.h"
#include "OptimusGeneratedClassDefiner.h"
#include "OptimusNode.h"
#include "OptimusValueProvider.h"
#include "OptimusNode_ConstantValue.generated.h"

UCLASS(Blueprintable)
class UOptimusNode_ConstantValue : public UOptimusNode, public IOptimusValueProvider, public IOptimusGeneratedClassDefiner {
    GENERATED_BODY()
public:
    UOptimusNode_ConstantValue();


    // Fix for true pure virtual functions not being implemented
};

