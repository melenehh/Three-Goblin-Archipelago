#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeSubGraph.h"
#include "OptimusFunctionNodeGraph.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UOptimusFunctionNodeGraph();

};

