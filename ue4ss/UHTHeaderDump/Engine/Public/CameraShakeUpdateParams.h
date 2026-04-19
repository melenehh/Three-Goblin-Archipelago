#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "CameraShakeUpdateParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeUpdateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DynamicScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo POV;
    
    ENGINE_API FCameraShakeUpdateParams();
};

