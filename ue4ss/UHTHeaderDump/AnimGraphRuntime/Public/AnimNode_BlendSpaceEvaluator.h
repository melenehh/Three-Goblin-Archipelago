#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendSpacePlayer.h"
#include "AnimNode_BlendSpaceEvaluator.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportToNormalizedTime;
    
    ANIMGRAPHRUNTIME_API FAnimNode_BlendSpaceEvaluator();
};

