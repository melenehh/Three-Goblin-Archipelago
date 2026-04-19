#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicationBridgeDeltaCompressionConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicationBridgeDeltaCompressionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDeltaCompression;
    
    IRISCORE_API FObjectReplicationBridgeDeltaCompressionConfig();
};

