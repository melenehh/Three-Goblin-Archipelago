#pragma once
#include "CoreMinimal.h"
#include "DataflowSelection.h"
#include "DataflowFaceSelection.generated.h"

USTRUCT(BlueprintType)
struct FDataflowFaceSelection : public FDataflowSelection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowFaceSelection();
};

