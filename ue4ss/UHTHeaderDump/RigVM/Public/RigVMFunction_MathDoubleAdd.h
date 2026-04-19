#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryAggregateOp.h"
#include "RigVMFunction_MathDoubleAdd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleAdd : public FRigVMFunction_MathDoubleBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleAdd();
};

