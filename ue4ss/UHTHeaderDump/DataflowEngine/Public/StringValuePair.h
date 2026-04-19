#pragma once
#include "CoreMinimal.h"
#include "StringValuePair.generated.h"

USTRUCT(BlueprintType)
struct FStringValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    DATAFLOWENGINE_API FStringValuePair();
};

