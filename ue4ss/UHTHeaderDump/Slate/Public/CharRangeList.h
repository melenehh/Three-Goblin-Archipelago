#pragma once
#include "CoreMinimal.h"
#include "CharRange.h"
#include "CharRangeList.generated.h"

USTRUCT(BlueprintType)
struct FCharRangeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharRange> Ranges;
    
    SLATE_API FCharRangeList();
};

