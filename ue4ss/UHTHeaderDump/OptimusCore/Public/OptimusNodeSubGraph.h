#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraph.h"
#include "OptimusParameterBinding.h"
#include "OptimusNodeSubGraph.generated.h"

class UOptimusNode_GraphTerminal;

UCLASS(Blueprintable)
class UOptimusNodeSubGraph : public UOptimusNodeGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusParameterBinding> InputBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusParameterBinding> OutputBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusNode_GraphTerminal> EntryNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusNode_GraphTerminal> ReturnNode;
    
    UOptimusNodeSubGraph();

};

