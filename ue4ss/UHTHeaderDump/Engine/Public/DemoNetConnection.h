#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "DemoNetConnection.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDemoNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UDemoNetConnection();

};

