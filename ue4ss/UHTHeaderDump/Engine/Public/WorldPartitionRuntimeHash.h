#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionRuntimeHash.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=WorldPartition)
class UWorldPartitionRuntimeHash : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionRuntimeHash();

};

