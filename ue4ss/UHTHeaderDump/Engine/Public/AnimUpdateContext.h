#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimUpdateContext.generated.h"

USTRUCT(BlueprintType)
struct FAnimUpdateContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    ENGINE_API FAnimUpdateContext();
};

