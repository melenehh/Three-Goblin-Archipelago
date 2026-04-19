#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.generated.h"

USTRUCT(BlueprintType)
struct FJsonObjectWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonString;
    
    JSONUTILITIES_API FJsonObjectWrapper();
};

