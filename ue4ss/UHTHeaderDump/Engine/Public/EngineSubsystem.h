#pragma once
#include "CoreMinimal.h"
#include "DynamicSubsystem.h"
#include "EngineSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UEngineSubsystem : public UDynamicSubsystem {
    GENERATED_BODY()
public:
    UEngineSubsystem();

};

