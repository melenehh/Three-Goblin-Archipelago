#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SoundSubmixWidgetInterface.generated.h"

class USoundSubmixBase;

UINTERFACE(Blueprintable, MinimalAPI)
class USoundSubmixWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class ISoundSubmixWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructed(USoundSubmixBase* SoundSubmix);
    
};

