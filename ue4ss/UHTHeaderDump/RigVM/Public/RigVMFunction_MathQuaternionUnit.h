#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathQuaternionUnaryOp.h"
#include "RigVMFunction_MathQuaternionUnit.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathQuaternionUnit();
};

