#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeDurationType.h"
#include "CameraShakeDuration.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeDuration {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakeDurationType Type;
    
public:
    ENGINE_API FCameraShakeDuration();
};

