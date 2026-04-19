#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeCell.h"
#include "WorldPartitionRuntimeLevelStreamingCell.generated.h"

class UWorldPartitionLevelStreamingDynamic;

UCLASS(Blueprintable, MinimalAPI)
class UWorldPartitionRuntimeLevelStreamingCell : public UWorldPartitionRuntimeCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldPartitionLevelStreamingDynamic* LevelStreaming;
    
public:
    UWorldPartitionRuntimeLevelStreamingCell();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
};

