#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryAggregateOp.h"
#include "RigVMFunction_MathIntAdd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntAdd();
};

