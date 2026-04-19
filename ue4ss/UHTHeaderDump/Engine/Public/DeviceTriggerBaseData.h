#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EInputDeviceTriggerMask -FallbackName=EInputDeviceTriggerMask
#include "DeviceTriggerBaseData.generated.h"

USTRUCT(BlueprintType)
struct FDeviceTriggerBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDeviceTriggerMask AffectedTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetUponCompletion;
    
    ENGINE_API FDeviceTriggerBaseData();
};

