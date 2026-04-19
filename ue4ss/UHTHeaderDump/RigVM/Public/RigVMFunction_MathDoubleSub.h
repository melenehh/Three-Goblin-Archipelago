#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoubleSub.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleSub();
};

