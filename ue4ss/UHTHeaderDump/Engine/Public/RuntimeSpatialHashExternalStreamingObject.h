#pragma once
#include "CoreMinimal.h"
#include "RuntimeHashExternalStreamingObjectBase.h"
#include "SpatialHashStreamingGrid.h"
#include "RuntimeSpatialHashExternalStreamingObject.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URuntimeSpatialHashExternalStreamingObject : public URuntimeHashExternalStreamingObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpatialHashStreamingGrid> StreamingGrids;
    
    URuntimeSpatialHashExternalStreamingObject();

};

