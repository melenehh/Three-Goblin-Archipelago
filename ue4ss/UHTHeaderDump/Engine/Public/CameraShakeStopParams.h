#pragma once
#include "CoreMinimal.h"
#include "CameraShakeStopParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeStopParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediately;
    
    ENGINE_API FCameraShakeStopParams();
};

