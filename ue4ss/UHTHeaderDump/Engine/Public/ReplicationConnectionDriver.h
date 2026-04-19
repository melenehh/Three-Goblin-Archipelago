#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationConnectionDriver.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UReplicationConnectionDriver : public UObject {
    GENERATED_BODY()
public:
    UReplicationConnectionDriver();

};

