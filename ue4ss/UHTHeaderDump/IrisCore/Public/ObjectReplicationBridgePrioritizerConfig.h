#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicationBridgePrioritizerConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicationBridgePrioritizerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrioritizerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnableOnAllInstances;
    
    IRISCORE_API FObjectReplicationBridgePrioritizerConfig();
};

