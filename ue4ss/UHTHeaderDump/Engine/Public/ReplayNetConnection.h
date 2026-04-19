#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "ReplayNetConnection.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UReplayNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UReplayNetConnection();

};

