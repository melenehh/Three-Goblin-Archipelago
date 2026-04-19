#pragma once
#include "CoreMinimal.h"
#include "SphereNetObjectPrioritizerConfig.h"
#include "SphereWithOwnerBoostNetObjectPrioritizerConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Engine)
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OwnerPriorityBoost;
    
    USphereWithOwnerBoostNetObjectPrioritizerConfig();

};

