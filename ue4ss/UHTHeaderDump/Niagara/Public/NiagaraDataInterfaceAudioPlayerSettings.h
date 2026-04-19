#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
#include "NiagaraDataInterfaceAudioPlayerSettings.generated.h"

class USoundConcurrency;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideConcurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* Concurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationSettings;
    
    UNiagaraDataInterfaceAudioPlayerSettings();

};

