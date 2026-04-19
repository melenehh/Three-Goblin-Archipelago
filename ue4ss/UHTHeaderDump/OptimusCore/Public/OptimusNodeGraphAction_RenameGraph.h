#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_RenameGraph.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_RenameGraph();
};

