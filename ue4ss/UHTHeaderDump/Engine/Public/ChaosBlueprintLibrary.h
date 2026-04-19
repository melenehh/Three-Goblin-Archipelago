#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "ChaosBlueprintLibrary.generated.h"

class UChaosEventRelay;
class UObject;

UCLASS(Blueprintable)
class UChaosBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChaosBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UChaosEventRelay* GetEventRelayFromContext(UObject* ContextObject);
    
};

