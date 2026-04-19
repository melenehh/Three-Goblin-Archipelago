#pragma once
#include "CoreMinimal.h"
#include "ActorContainerID.h"
#include "WorldPartitionResolveData.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionResolveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorContainerID ContainerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceWorldAssetPath;
    
    ENGINE_API FWorldPartitionResolveData();
};

