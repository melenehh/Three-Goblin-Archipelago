#pragma once
#include "CoreMinimal.h"
#include "AnimNode_MirrorBase.h"
#include "AnimNode_Mirror.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_Mirror : public FAnimNode_MirrorBase {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FAnimNode_Mirror();
};

