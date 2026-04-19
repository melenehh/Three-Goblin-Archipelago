#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_UseCachedPose.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_UseCachedPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink LinkToCachingNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CachePoseName;
    
    ENGINE_API FAnimNode_UseCachedPose();
};

