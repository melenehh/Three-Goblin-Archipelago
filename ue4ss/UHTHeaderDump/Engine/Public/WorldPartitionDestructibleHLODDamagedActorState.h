#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "WorldPartitionDestructibleHLODDamagedActorState.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionDestructibleHLODDamagedActorState : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActorHealth;
    
    ENGINE_API FWorldPartitionDestructibleHLODDamagedActorState();
};

