#pragma once
#include "CoreMinimal.h"
#include "DataflowConnection.h"
#include "DataflowOutput.generated.h"

USTRUCT(BlueprintType)
struct FDataflowOutput : public FDataflowConnection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowOutput();
};

