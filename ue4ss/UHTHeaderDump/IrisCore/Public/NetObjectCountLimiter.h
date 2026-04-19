#pragma once
#include "CoreMinimal.h"
#include "NetObjectPrioritizer.h"
#include "NetObjectCountLimiter.generated.h"

UCLASS(Blueprintable)
class UNetObjectCountLimiter : public UNetObjectPrioritizer {
    GENERATED_BODY()
public:
    UNetObjectCountLimiter();

};

