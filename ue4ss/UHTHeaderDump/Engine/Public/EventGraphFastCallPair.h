#pragma once
#include "CoreMinimal.h"
#include "EventGraphFastCallPair.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FEventGraphFastCallPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* FunctionToPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventGraphCallOffset;
    
    ENGINE_API FEventGraphFastCallPair();
};

