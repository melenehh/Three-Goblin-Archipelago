#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryAggregateOp.h"
#include "RigVMFunction_MathVectorAdd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorAdd : public FRigVMFunction_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorAdd();
};

