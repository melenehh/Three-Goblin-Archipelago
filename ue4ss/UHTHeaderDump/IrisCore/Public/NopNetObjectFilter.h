#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilter.h"
#include "NopNetObjectFilter.generated.h"

UCLASS(Blueprintable)
class UNopNetObjectFilter : public UNetObjectFilter {
    GENERATED_BODY()
public:
    UNopNetObjectFilter();

};

