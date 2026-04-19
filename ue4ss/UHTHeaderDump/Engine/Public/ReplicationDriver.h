#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationDriver.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UReplicationDriver : public UObject {
    GENERATED_BODY()
public:
    UReplicationDriver();

};

