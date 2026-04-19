#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationSystemBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, MinimalAPI, Transient, Config=Engine)
class UNavigationSystemBase : public UObject {
    GENERATED_BODY()
public:
    UNavigationSystemBase();

};

