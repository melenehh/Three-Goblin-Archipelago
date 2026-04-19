#pragma once
#include "CoreMinimal.h"
#include "DeviceColorCurveData.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FDeviceColorCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetAfterCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* DeviceColorCurve;
    
    ENGINE_API FDeviceColorCurveData();
};

