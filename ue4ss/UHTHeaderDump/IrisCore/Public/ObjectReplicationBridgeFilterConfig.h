#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicationBridgeFilterConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicationBridgeFilterConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicFilterName;
    
    IRISCORE_API FObjectReplicationBridgeFilterConfig();
};

