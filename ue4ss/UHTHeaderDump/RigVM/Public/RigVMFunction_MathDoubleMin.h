#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryAggregateOp.h"
#include "RigVMFunction_MathDoubleMin.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleMin : public FRigVMFunction_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleMin();
};

