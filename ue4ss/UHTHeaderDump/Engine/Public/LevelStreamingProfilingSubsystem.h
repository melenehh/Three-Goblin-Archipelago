#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "LevelStreamingProfilingSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULevelStreamingProfilingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULevelStreamingProfilingSubsystem();

};

