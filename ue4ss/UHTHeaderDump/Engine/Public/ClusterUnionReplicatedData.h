#pragma once
#include "CoreMinimal.h"
#include "ClusterUnionReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FClusterUnionReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ObjectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnchored;
    
    ENGINE_API FClusterUnionReplicatedData();
};

