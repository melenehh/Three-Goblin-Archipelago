#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "AnimNode_TransitionResult.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_TransitionResult : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterTransition;
    
    ENGINE_API FAnimNode_TransitionResult();
};

