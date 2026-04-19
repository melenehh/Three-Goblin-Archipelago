#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBase.h"
#include "RigVMFunction_MathIntUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntUnaryOp : public FRigVMFunction_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    FRigVMFunction_MathIntUnaryOp();
};

