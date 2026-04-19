#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimComponentSpacePoseContext.generated.h"

USTRUCT(BlueprintType)
struct FAnimComponentSpacePoseContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    ENGINE_API FAnimComponentSpacePoseContext();
};

