#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ServerStreamingLevelsVisibility.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable, Transient)
class AServerStreamingLevelsVisibility : public AActor {
    GENERATED_BODY()
public:
    AServerStreamingLevelsVisibility(const FObjectInitializer& ObjectInitializer);

};

