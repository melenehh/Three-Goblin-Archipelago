#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_Root.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_Root : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Result;
    
    ENGINE_API FAnimNode_Root();
};

