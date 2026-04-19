#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Root.h"
#include "AnimNode_StateResult.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_StateResult : public FAnimNode_Root {
    GENERATED_BODY()
public:
    ENGINE_API FAnimNode_StateResult();
};

