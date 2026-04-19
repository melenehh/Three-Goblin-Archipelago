#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryAggregateOp.h"
#include "RigVMFunction_MathVectorMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorMul : public FRigVMFunction_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorMul();
};

