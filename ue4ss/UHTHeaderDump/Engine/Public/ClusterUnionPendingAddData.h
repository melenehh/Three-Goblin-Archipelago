#pragma once
#include "CoreMinimal.h"
#include "ExternalSpatialAccelerationPayload.h"
#include "ClusterUnionPendingAddData.generated.h"

USTRUCT(BlueprintType)
struct FClusterUnionPendingAddData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExternalSpatialAccelerationPayload> AccelerationPayloads;
    
    ENGINE_API FClusterUnionPendingAddData();
};

