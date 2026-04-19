#pragma once
#include "CoreMinimal.h"
#include "DataflowSelection.h"
#include "DataflowTransformSelection.generated.h"

USTRUCT(BlueprintType)
struct FDataflowTransformSelection : public FDataflowSelection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowTransformSelection();
};

