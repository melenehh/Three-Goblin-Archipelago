#pragma once
#include "CoreMinimal.h"
#include "ChaosCacheManager.h"
#include "ChaosCachePlayer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AChaosCachePlayer : public AChaosCacheManager {
    GENERATED_BODY()
public:
    AChaosCachePlayer(const FObjectInitializer& ObjectInitializer);

};

