#pragma once
#include "CoreMinimal.h"
#include "NetLevelVisibilityTransactionId.generated.h"

USTRUCT(BlueprintType)
struct FNetLevelVisibilityTransactionId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Data;
    
public:
    ENGINE_API FNetLevelVisibilityTransactionId();
};

