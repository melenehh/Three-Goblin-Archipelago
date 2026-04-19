#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryOp.h"
#include "RigVMFunction_MathIntSub.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntSub();
};

