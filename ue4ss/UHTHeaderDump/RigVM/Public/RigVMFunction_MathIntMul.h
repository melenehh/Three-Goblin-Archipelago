#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntMul.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntMul();
};

