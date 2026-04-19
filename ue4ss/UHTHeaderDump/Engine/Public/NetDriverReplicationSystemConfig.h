#pragma once
#include "CoreMinimal.h"
#include "NetDriverReplicationSystemConfig.generated.h"

USTRUCT(BlueprintType)
struct FNetDriverReplicationSystemConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxReplicatedObjectCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxDeltaCompressedObjectCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxNetObjectGroupCount;
    
    ENGINE_API FNetDriverReplicationSystemConfig();
};

