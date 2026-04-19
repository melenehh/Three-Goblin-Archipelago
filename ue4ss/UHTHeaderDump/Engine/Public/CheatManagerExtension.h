#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CheatManagerExtension.generated.h"

class APlayerController;

UCLASS(Blueprintable, MinimalAPI, Within=CheatManager)
class UCheatManagerExtension : public UObject {
    GENERATED_BODY()
public:
    UCheatManagerExtension();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovedFromCheatManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddedToCheatManager();
    
};

