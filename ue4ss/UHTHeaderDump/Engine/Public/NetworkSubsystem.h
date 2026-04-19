#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "NetworkSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNetworkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UNetworkSubsystem();

};

