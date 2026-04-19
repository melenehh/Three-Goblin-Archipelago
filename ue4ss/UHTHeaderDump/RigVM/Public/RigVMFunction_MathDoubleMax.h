#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryAggregateOp.h"
#include "RigVMFunction_MathDoubleMax.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleMax();
};

