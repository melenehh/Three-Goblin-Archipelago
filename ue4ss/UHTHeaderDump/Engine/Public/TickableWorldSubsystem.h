#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "TickableWorldSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UTickableWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UTickableWorldSubsystem();

};

