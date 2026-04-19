#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathMatrixBinaryAggregateOp.h"
#include "RigVMFunction_MathMatrixMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathMatrixMul : public FRigVMFunction_MathMatrixBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathMatrixMul();
};

