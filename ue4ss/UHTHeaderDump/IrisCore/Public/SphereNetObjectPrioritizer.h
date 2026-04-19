#pragma once
#include "CoreMinimal.h"
#include "LocationBasedNetObjectPrioritizer.h"
#include "SphereNetObjectPrioritizer.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer {
    GENERATED_BODY()
public:
    USphereNetObjectPrioritizer();

};

