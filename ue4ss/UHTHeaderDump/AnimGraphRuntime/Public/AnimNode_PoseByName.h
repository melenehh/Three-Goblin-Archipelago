#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseHandler.h"
#include "AnimNode_PoseByName.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseWeight;
    
    ANIMGRAPHRUNTIME_API FAnimNode_PoseByName();
};

