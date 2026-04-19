#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowTerminalNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowTerminalNode : public FDataflowNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowTerminalNode();
};

