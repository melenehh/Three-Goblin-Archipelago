#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceBlendProfile.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct FBlendSpaceBlendProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWeightInterpolationSpeedPerSec;
    
    ENGINE_API FBlendSpaceBlendProfile();
};

