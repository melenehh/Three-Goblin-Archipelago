#pragma once
#include "CoreMinimal.h"
#include "BlueprintAsyncActionBase.h"
#include "CancellableAsyncAction.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UCancellableAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UCancellableAsyncAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

