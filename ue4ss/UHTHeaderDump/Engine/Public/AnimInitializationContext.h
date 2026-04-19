#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimInitializationContext.generated.h"

USTRUCT(BlueprintType)
struct FAnimInitializationContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    ENGINE_API FAnimInitializationContext();
};

