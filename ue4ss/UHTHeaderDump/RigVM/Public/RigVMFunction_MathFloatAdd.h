#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryAggregateOp.h"
#include "RigVMFunction_MathFloatAdd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatAdd : public FRigVMFunction_MathFloatBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatAdd();
};

