#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameter -FallbackName=AudioParameter
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ActorSoundParameterInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UActorSoundParameterInterface : public UInterface {
    GENERATED_BODY()
};

class IActorSoundParameterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetActorSoundParams(TArray<FAudioParameter>& Params) const;
    
};

