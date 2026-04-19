#pragma once
#include "CoreMinimal.h"
#include "DynamicSubsystem.h"
#include "AudioEngineSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAudioEngineSubsystem : public UDynamicSubsystem {
    GENERATED_BODY()
public:
    UAudioEngineSubsystem();

};

