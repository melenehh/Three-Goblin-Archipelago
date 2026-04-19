#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "ActivateDevicePropertyParams.generated.h"

USTRUCT(BlueprintType)
struct FActivateDevicePropertyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformUserId UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputDeviceId DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreTimeDilation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayWhilePaused: 1;
    
    ENGINE_API FActivateDevicePropertyParams();
};

