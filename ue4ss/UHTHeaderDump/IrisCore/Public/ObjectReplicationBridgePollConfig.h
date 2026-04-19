#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicationBridgePollConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicationBridgePollConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PollFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeSubclasses;
    
    IRISCORE_API FObjectReplicationBridgePollConfig();
};

