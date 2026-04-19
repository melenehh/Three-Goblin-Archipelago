#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerTriggerResistanceData.generated.h"

USTRUCT(BlueprintType)
struct FDeviceTriggerTriggerResistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartStrengh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndStrengh;
    
    ENGINE_API FDeviceTriggerTriggerResistanceData();
};

