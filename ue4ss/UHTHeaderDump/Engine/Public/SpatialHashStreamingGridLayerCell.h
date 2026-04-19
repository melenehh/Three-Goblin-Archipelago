#pragma once
#include "CoreMinimal.h"
#include "SpatialHashStreamingGridLayerCell.generated.h"

class UWorldPartitionRuntimeCell;

USTRUCT(BlueprintType)
struct FSpatialHashStreamingGridLayerCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> GridCells;
    
    ENGINE_API FSpatialHashStreamingGridLayerCell();
};

