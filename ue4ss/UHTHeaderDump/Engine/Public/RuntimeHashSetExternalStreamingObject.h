#pragma once
#include "CoreMinimal.h"
#include "RuntimeHashExternalStreamingObjectBase.h"
#include "RuntimeHashSetExternalStreamingObject.generated.h"

class UWorldPartitionRuntimeCell;

UCLASS(Blueprintable)
class URuntimeHashSetExternalStreamingObject : public URuntimeHashExternalStreamingObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> NonSpatiallyLoadedRuntimeCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> SpatiallyLoadedRuntimeCells;
    
    URuntimeHashSetExternalStreamingObject();

};

