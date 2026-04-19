#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "GameInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=GameInstance)
class UGameInstanceSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UGameInstanceSubsystem();

};

