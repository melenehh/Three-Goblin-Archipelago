#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.h"
#include "BlueprintFunctionLibrary.h"
#include "AnimNotifyLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAnimNotifyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNotifyLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotifyStateReachedEnd(const FAnimNotifyEventReference& EventReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAnimationTimeRatio(const FAnimNotifyEventReference& EventReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAnimationTime(const FAnimNotifyEventReference& EventReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAnimationNotifyStateTimeRatio(const FAnimNotifyEventReference& EventReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAnimationNotifyStateTime(const FAnimNotifyEventReference& EventReference);
    
};

