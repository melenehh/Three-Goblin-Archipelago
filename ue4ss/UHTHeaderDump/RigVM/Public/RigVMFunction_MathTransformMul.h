#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathTransformBinaryAggregateOp.h"
#include "RigVMFunction_MathTransformMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathTransformMul : public FRigVMFunction_MathTransformBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathTransformMul();
};

