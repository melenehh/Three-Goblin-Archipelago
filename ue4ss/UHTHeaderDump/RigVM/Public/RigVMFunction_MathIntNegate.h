#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntUnaryOp.h"
#include "RigVMFunction_MathIntNegate.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntNegate();
};

