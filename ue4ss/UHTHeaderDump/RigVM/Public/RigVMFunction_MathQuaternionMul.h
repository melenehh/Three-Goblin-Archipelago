#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathQuaternionBinaryAggregateOp.h"
#include "RigVMFunction_MathQuaternionMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathQuaternionMul();
};

