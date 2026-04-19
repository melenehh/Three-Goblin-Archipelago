#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioEngineSubsystem -FallbackName=AudioEngineSubsystem
#include "AudioBusSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioBusSubsystem : public UAudioEngineSubsystem {
    GENERATED_BODY()
public:
    UAudioBusSubsystem();

};

