#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "CameraShakeScrubParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeScrubParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsoluteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DynamicScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo POV;
    
    ENGINE_API FCameraShakeScrubParams();
};

