#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AudioLinkBlueprintInterface.generated.h"

class USoundBase;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UAudioLinkBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class IAudioLinkBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopLink() PURE_VIRTUAL(StopLink,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetLinkSound(USoundBase* NewSound) PURE_VIRTUAL(SetLinkSound,);
    
    UFUNCTION(BlueprintCallable)
    virtual void PlayLink(float StartTime) PURE_VIRTUAL(PlayLink,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsLinkPlaying() const PURE_VIRTUAL(IsLinkPlaying, return false;);
    
};

