#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleBinaryAggregateOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleBinaryAggregateOp : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    FRigVMFunction_MathDoubleBinaryAggregateOp();
};

