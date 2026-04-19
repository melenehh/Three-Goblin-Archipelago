#pragma once
#include "CoreMinimal.h"
#include "DataStream.h"
#include "ReplicationDataStream.generated.h"

UCLASS(Blueprintable, NonTransient)
class UReplicationDataStream : public UDataStream {
    GENERATED_BODY()
public:
    UReplicationDataStream();

};

