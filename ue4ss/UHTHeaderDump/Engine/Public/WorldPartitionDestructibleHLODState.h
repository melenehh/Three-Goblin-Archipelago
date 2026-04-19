#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "WorldPartitionDestructibleHLODDamagedActorState.h"
#include "WorldPartitionDestructibleHLODState.generated.h"

class UWorldPartitionDestructibleHLODComponent;

USTRUCT(BlueprintType)
struct FWorldPartitionDestructibleHLODState : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldPartitionDestructibleHLODDamagedActorState> DamagedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UWorldPartitionDestructibleHLODComponent* OwnerComponent;
    
public:
    ENGINE_API FWorldPartitionDestructibleHLODState();
};

