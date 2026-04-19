#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryAggregateOp.h"
#include "RigVMFunction_MathFloatMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatMul : public FRigVMFunction_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatMul();
};

