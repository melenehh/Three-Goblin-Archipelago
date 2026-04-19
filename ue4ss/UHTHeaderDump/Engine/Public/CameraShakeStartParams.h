#pragma once
#include "CoreMinimal.h"
#include "CameraShakeStartParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeStartParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestarting;
    
    ENGINE_API FCameraShakeStartParams();
};

