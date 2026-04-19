#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionHLODModifier.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UWorldPartitionHLODModifier : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionHLODModifier();

};

