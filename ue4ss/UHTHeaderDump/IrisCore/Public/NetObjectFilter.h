#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class UNetObjectFilter : public UObject {
    GENERATED_BODY()
public:
    UNetObjectFilter();

};

