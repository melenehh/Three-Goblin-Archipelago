#pragma once
#include "CoreMinimal.h"
#include "InterchangeUserDefinedAttributeInfo.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeUserDefinedAttributeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    INTERCHANGECORE_API FInterchangeUserDefinedAttributeInfo();
};

