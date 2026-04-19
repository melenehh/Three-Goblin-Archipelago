#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByInt.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FAnimNode_BlendListByInt();
};

