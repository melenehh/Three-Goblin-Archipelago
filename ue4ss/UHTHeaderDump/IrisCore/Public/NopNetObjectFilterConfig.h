#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilterConfig.h"
#include "NopNetObjectFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UNopNetObjectFilterConfig : public UNetObjectFilterConfig {
    GENERATED_BODY()
public:
    UNopNetObjectFilterConfig();

};

