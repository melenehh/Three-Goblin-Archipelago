#pragma once
#include "CoreMinimal.h"
#include "OptimusParameterBinding.h"
#include "OptimusParameterBindingArray.generated.h"

USTRUCT(BlueprintType)
struct FOptimusParameterBindingArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusParameterBinding> InnerArray;
    
    OPTIMUSCORE_API FOptimusParameterBindingArray();
};

