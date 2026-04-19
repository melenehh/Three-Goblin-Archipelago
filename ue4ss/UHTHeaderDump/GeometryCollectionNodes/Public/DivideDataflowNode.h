#pragma once
#include "CoreMinimal.h"
#include "SafeDivideDataflowNode.h"
#include "DivideDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FDivideDataflowNode : public FSafeDivideDataflowNode {
    GENERATED_BODY()
public:
    GEOMETRYCOLLECTIONNODES_API FDivideDataflowNode();
};

