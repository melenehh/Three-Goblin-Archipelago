#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathColorBinaryAggregateOp.h"
#include "RigVMFunction_MathColorAdd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathColorAdd();
};

