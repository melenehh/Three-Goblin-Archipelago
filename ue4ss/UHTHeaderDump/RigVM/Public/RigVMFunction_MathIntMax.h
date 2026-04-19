#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntMax.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntMax();
};

