#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "SimulatedClientNetConnection.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USimulatedClientNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    USimulatedClientNetConnection();

};

