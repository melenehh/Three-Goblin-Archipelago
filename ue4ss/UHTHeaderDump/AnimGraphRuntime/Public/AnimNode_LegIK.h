#pragma once
#include "CoreMinimal.h"
#include "AnimLegIKDefinition.h"
#include "AnimNode_SkeletalControlBase.h"
#include "AnimNode_LegIK.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimLegIKDefinition> LegsDefinition;
    
    ANIMGRAPHRUNTIME_API FAnimNode_LegIK();
};

