#pragma once
#include "CoreMinimal.h"
#include "NetObjectPrioritizer.h"
#include "LocationBasedNetObjectPrioritizer.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer {
    GENERATED_BODY()
public:
    ULocationBasedNetObjectPrioritizer();

};

