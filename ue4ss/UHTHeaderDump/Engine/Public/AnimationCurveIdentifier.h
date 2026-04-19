#pragma once
#include "CoreMinimal.h"
#include "ERawCurveTrackTypes.h"
#include "ETransformCurveChannel.h"
#include "EVectorCurveChannel.h"
#include "AnimationCurveIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FAnimationCurveIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERawCurveTrackTypes CurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformCurveChannel Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVectorCurveChannel Axis;
    
    ENGINE_API FAnimationCurveIdentifier();
};

