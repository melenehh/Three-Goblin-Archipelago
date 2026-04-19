#pragma once
#include "CoreMinimal.h"
#include "CameraShakeDuration.h"
#include "CameraShakeInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraShakeDuration Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOut;
    
    ENGINE_API FCameraShakeInfo();
};

