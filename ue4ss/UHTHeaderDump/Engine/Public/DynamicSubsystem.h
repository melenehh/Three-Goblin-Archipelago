#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "DynamicSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UDynamicSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UDynamicSubsystem();

};

