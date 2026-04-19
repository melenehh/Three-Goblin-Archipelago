#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathTransformUnaryOp.h"
#include "RigVMFunction_MathTransformInverse.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathTransformInverse();
};

