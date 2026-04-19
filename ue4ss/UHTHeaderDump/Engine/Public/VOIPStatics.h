#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "VOIPStatics.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVOIPStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVOIPStatics();

    UFUNCTION(BlueprintCallable)
    static void SetMicThreshold(float InThreshold);
    
};

