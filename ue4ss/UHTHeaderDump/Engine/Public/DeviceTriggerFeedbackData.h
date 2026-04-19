#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerFeedbackData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDeviceTriggerFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FeedbackPositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FeedbackStrenghCurve;
    
    ENGINE_API FDeviceTriggerFeedbackData();
};

