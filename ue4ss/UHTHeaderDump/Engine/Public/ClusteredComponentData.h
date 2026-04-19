#pragma once
#include "CoreMinimal.h"
#include "ClusteredComponentData.generated.h"

class UClusterUnionReplicatedProxyComponent;

USTRUCT(BlueprintType)
struct FClusteredComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UClusterUnionReplicatedProxyComponent> ReplicatedProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasReplicating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingDeletion;
    
    ENGINE_API FClusteredComponentData();
};

