#pragma once
#include "CoreMinimal.h"
#include "CharRange.generated.h"

USTRUCT(BlueprintType)
struct FCharRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 First;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Last;
    
    SLATE_API FCharRange();
};

