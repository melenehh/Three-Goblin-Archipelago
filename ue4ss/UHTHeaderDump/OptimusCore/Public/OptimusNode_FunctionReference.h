#pragma once
#include "CoreMinimal.h"
#include "OptimusNode.h"
#include "OptimusNodePinRouter.h"
#include "OptimusNode_FunctionReference.generated.h"

class UOptimusFunctionNodeGraph;

UCLASS(Blueprintable)
class UOptimusNode_FunctionReference : public UOptimusNode, public IOptimusNodePinRouter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusFunctionNodeGraph* FunctionGraph;
    
public:
    UOptimusNode_FunctionReference();


    // Fix for true pure virtual functions not being implemented
};

