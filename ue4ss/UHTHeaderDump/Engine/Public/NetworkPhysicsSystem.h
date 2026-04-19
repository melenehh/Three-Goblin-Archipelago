#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "NetworkPhysicsSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNetworkPhysicsSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UNetworkPhysicsSystem();

};

