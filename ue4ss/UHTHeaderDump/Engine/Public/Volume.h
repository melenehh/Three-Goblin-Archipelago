#pragma once
#include "CoreMinimal.h"
#include "Brush.h"
#include "Volume.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AVolume : public ABrush {
    GENERATED_BODY()
public:
    AVolume(const FObjectInitializer& ObjectInitializer);

};

