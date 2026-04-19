#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilterConfig.h"
#include "FilterOutNetObjectFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig {
    GENERATED_BODY()
public:
    UFilterOutNetObjectFilterConfig();

};

