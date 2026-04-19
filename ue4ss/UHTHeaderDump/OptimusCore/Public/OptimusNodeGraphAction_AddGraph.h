#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_AddGraph.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_AddGraph();
};

