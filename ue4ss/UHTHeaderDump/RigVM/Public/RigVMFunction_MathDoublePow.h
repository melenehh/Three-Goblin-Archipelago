#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoublePow.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoublePow();
};

