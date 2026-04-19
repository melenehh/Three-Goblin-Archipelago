#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatRad.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatRad : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatRad();
};

