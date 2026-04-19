#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryAggregateOp.h"
#include "RigVMFunction_MathVectorMax.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorMax : public FRigVMFunction_MathVectorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorMax();
};

