#pragma once
#include "CoreMinimal.h"
#include "InputRange.generated.h"

USTRUCT(BlueprintType)
struct FInputRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    ENGINE_API FInputRange();
};

