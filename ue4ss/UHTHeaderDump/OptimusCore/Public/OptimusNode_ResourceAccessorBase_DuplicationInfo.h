#pragma once
#include "CoreMinimal.h"
#include "OptimusDataDomain.h"
#include "OptimusDataTypeRef.h"
#include "OptimusNode_ResourceAccessorBase_DuplicationInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataDomain DataDomain;
    
    OPTIMUSCORE_API FOptimusNode_ResourceAccessorBase_DuplicationInfo();
};

