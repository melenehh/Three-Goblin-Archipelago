#pragma once
#include "CoreMinimal.h"
#include "EOptimusTerminalType.h"
#include "OptimusNode.h"
#include "OptimusNodePinRouter.h"
#include "OptimusNode_GraphTerminal.generated.h"

class UOptimusNodeSubGraph;

UCLASS(Blueprintable)
class UOptimusNode_GraphTerminal : public UOptimusNode, public IOptimusNodePinRouter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusTerminalType TerminalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusNodeSubGraph> OwningGraph;
    
public:
    UOptimusNode_GraphTerminal();


    // Fix for true pure virtual functions not being implemented
};

