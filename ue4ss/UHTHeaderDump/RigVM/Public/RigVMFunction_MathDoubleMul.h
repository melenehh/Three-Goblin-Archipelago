#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryAggregateOp.h"
#include "RigVMFunction_MathDoubleMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleMul : public FRigVMFunction_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleMul();
};

