#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionHLODSourceActors.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UWorldPartitionHLODSourceActors : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionHLODSourceActors();

};

