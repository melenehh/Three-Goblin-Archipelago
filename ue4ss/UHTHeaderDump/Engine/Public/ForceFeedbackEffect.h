#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ForceFeedbackChannelDetails.h"
#include "ForceFeedbackEffectOverridenChannelDetails.h"
#include "ForceFeedbackEffect.generated.h"

class UInputDeviceProperty;

UCLASS(Blueprintable, MinimalAPI)
class UForceFeedbackEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FForceFeedbackEffectOverridenChannelDetails> PerDeviceOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInputDeviceProperty*> DeviceProperties;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UForceFeedbackEffect();

};

