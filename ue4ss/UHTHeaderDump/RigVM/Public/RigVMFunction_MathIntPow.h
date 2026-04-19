#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryOp.h"
#include "RigVMFunction_MathIntPow.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntPow : public FRigVMFunction_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntPow();
};

