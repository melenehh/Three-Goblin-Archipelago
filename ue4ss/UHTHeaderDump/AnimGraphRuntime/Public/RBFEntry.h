#pragma once
#include "CoreMinimal.h"
#include "RBFEntry.generated.h"

USTRUCT(BlueprintType)
struct FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    ANIMGRAPHRUNTIME_API FRBFEntry();
};

