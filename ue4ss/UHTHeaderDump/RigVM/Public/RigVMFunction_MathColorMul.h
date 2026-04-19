#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathColorBinaryAggregateOp.h"
#include "RigVMFunction_MathColorMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathColorMul : public FRigVMFunction_MathColorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathColorMul();
};

