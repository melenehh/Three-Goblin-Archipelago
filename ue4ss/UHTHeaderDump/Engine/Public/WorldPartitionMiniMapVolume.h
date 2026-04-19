#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "WorldPartitionMiniMapVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AWorldPartitionMiniMapVolume : public AVolume {
    GENERATED_BODY()
public:
    AWorldPartitionMiniMapVolume(const FObjectInitializer& ObjectInitializer);

};

