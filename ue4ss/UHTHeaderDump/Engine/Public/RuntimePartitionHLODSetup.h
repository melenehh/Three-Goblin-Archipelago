#pragma once
#include "CoreMinimal.h"
#include "RuntimePartitionHLODSetup.generated.h"

class UHLODLayer;
class URuntimePartition;

USTRUCT(BlueprintType)
struct FRuntimePartitionHLODSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHLODLayer* HLODLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimePartition* PartitionLayer;
    
    ENGINE_API FRuntimePartitionHLODSetup();
};

