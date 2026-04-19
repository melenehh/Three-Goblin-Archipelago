#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_SingleNode.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_SingleNode : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    ENGINE_API FAnimNode_SingleNode();
};

