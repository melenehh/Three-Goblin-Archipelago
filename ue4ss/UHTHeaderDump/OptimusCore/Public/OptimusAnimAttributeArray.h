#pragma once
#include "CoreMinimal.h"
#include "OptimusAnimAttributeDescription.h"
#include "OptimusAnimAttributeArray.generated.h"

USTRUCT(BlueprintType)
struct FOptimusAnimAttributeArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusAnimAttributeDescription> InnerArray;
    
    OPTIMUSCORE_API FOptimusAnimAttributeArray();
};

