#pragma once
#include "CoreMinimal.h"
#include "AnimExecutionContext.h"
#include "AnimPoseContext.generated.h"

USTRUCT(BlueprintType)
struct FAnimPoseContext : public FAnimExecutionContext {
    GENERATED_BODY()
public:
    ENGINE_API FAnimPoseContext();
};

