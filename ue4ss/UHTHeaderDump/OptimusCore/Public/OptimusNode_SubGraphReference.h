#pragma once
#include "CoreMinimal.h"
#include "OptimusNode.h"
#include "OptimusNodePinRouter.h"
#include "OptimusNode_SubGraphReference.generated.h"

class UOptimusNodeSubGraph;

UCLASS(Blueprintable)
class UOptimusNode_SubGraphReference : public UOptimusNode, public IOptimusNodePinRouter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusNodeSubGraph* SubGraph;
    
public:
    UOptimusNode_SubGraphReference();


    // Fix for true pure virtual functions not being implemented
};

