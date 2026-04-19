#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CrowdManagerBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UCrowdManagerBase : public UObject {
    GENERATED_BODY()
public:
    UCrowdManagerBase();

};

