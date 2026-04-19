#pragma once
#include "CoreMinimal.h"
#include "DataflowSelection.h"
#include "DataflowVertexSelection.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVertexSelection : public FDataflowSelection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowVertexSelection();
};

