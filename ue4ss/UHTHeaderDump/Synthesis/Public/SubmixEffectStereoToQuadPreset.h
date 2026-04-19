#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectStereoToQuadSettings.h"
#include "SubmixEffectStereoToQuadPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectStereoToQuadSettings Settings;
    
    USubmixEffectStereoToQuadPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectStereoToQuadSettings& InSettings);
    
};

