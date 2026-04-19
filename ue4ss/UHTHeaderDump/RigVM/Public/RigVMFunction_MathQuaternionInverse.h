#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathQuaternionUnaryOp.h"
#include "RigVMFunction_MathQuaternionInverse.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathQuaternionInverse();
};

