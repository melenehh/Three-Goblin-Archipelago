#pragma once
#include "CoreMinimal.h"
#include "OptimusDataDomain.h"
#include "OptimusDataTypeRef.h"
#include "OptimusValidatedName.h"
#include "OptimusParameterBinding.generated.h"

USTRUCT(BlueprintType)
struct FOptimusParameterBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValidatedName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataDomain DataDomain;
    
    OPTIMUSCORE_API FOptimusParameterBinding();
};

