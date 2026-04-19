#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeHash.h"
#include "WorldPartitionRuntimeHashSet.generated.h"

class UWorldPartitionRuntimeCell;

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class UWorldPartitionRuntimeHashSet : public UWorldPartitionRuntimeHash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> NonSpatiallyLoadedRuntimeCells;
    
    UWorldPartitionRuntimeHashSet();

};

