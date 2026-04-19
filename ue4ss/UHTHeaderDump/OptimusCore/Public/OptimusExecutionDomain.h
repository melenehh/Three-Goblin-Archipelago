#pragma once
#include "CoreMinimal.h"
#include "OptimusExecutionDomain.generated.h"

USTRUCT(BlueprintType)
struct OPTIMUSCORE_API FOptimusExecutionDomain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FOptimusExecutionDomain();
};

