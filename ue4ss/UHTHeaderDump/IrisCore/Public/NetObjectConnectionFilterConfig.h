#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilterConfig.h"
#include "NetObjectConnectionFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Engine)
class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxObjectCount;
    
    UNetObjectConnectionFilterConfig();

};

