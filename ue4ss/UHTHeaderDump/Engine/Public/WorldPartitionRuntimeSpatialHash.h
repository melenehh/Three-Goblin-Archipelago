#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionCVarProjectDefaultOverride.h"
#include "SpatialHashStreamingGrid.h"
#include "WorldPartitionRuntimeHash.h"
#include "WorldPartitionRuntimeSpatialHash.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UWorldPartitionRuntimeSpatialHash : public UWorldPartitionRuntimeHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionCVarProjectDefaultOverride UseAlignedGridLevels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionCVarProjectDefaultOverride SnapNonAlignedGridLevelsToLowerLevels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionCVarProjectDefaultOverride PlaceSmallActorsUsingLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionCVarProjectDefaultOverride PlacePartitionActorsUsingLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableZCulling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<FSpatialHashStreamingGrid> StreamingGrids;
    
public:
    UWorldPartitionRuntimeSpatialHash();

};

