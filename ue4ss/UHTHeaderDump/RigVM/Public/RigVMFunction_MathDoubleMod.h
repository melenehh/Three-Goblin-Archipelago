#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoubleMod.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleMod : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleMod();
};

