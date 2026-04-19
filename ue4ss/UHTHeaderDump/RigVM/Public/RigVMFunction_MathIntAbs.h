#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntUnaryOp.h"
#include "RigVMFunction_MathIntAbs.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntAbs();
};

