#pragma once
#include "CoreMinimal.h"
#include "SphereNetObjectPrioritizer.h"
#include "SphereWithOwnerBoostNetObjectPrioritizer.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer {
    GENERATED_BODY()
public:
    USphereWithOwnerBoostNetObjectPrioritizer();

};

