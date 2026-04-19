#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "TriggerVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ATriggerVolume : public AVolume {
    GENERATED_BODY()
public:
    ATriggerVolume(const FObjectInitializer& ObjectInitializer);

};

