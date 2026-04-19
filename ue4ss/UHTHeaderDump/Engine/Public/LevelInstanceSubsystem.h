#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "LevelInstanceSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULevelInstanceSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULevelInstanceSubsystem();

};

