#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionHLODDestructionTag.generated.h"

class UWorldPartitionDestructibleHLODComponent;

USTRUCT(BlueprintType)
struct FWorldPartitionHLODDestructionTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldPartitionDestructibleHLODComponent* HLODDestructionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorIndex;
    
    ENGINE_API FWorldPartitionHLODDestructionTag();
};

