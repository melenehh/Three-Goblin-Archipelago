#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilter.h"
#include "NetObjectConnectionFilter.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNetObjectConnectionFilter : public UNetObjectFilter {
    GENERATED_BODY()
public:
    UNetObjectConnectionFilter();

};

