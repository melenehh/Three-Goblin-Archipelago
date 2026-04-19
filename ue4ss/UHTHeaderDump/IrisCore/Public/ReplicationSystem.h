#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicationSystem.generated.h"

class UReplicationBridge;

UCLASS(Blueprintable, Transient)
class UReplicationSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplicationBridge* ReplicationBridge;
    
public:
    UReplicationSystem();

};

