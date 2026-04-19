#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntMin.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntMin();
};

