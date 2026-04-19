#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatPow.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatPow : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatPow();
};

