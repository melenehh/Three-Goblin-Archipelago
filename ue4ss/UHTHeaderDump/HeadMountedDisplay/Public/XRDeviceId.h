#pragma once
#include "CoreMinimal.h"
#include "XRDeviceId.generated.h"

USTRUCT(BlueprintType)
struct FXRDeviceId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SystemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeviceID;
    
    HEADMOUNTEDDISPLAY_API FXRDeviceId();
};

