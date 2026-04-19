#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatSqrt.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatSqrt();
};

