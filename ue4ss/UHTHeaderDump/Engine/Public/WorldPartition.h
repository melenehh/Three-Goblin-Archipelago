#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWorldPartitionServerStreamingMode.h"
#include "EWorldPartitionServerStreamingOutMode.h"
#include "WorldPartition.generated.h"

class UActorDescContainer;
class UDataLayerManager;
class UWorldPartitionRuntimeHash;
class UWorldPartitionStreamingPolicy;

UCLASS(Blueprintable, MinimalAPI)
class UWorldPartition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorDescContainer* ActorDescContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldPartitionRuntimeHash* RuntimeHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStreaming;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionServerStreamingMode ServerStreamingMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionServerStreamingOutMode ServerStreamingOutMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataLayerManager* DataLayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldPartitionStreamingPolicy* StreamingPolicy;
    
public:
    UWorldPartition();

};

