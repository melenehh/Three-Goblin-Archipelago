#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectSubmixEQSettings.h"
#include "SubmixEffectSubmixEQPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectSubmixEQSettings Settings;
    
    USubmixEffectSubmixEQPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
    
};

