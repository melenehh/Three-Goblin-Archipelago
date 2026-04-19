#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingDynamic.h"
#include "LevelStreamingLevelInstance.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Transient)
class ULevelStreamingLevelInstance : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
    ULevelStreamingLevelInstance();

};

