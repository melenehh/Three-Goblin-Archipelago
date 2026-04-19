#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectStereoToQuadSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectStereoToQuadSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearChannelGain;
    
    FSubmixEffectStereoToQuadSettings();
};

