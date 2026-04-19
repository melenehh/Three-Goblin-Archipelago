#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WorldPartitionRuntimeCellData.h"
#include "WorldPartitionRuntimeCellDataSpatialHash.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=WorldPartitionRuntimeCell)
class UWorldPartitionRuntimeCellDataSpatialHash : public UWorldPartitionRuntimeCellData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Extent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GridName;
    
    UWorldPartitionRuntimeCellDataSpatialHash();

};

