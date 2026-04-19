#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryAggregateOp.h"
#include "RigVMFunction_MathFloatMax.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatMax : public FRigVMFunction_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatMax();
};

