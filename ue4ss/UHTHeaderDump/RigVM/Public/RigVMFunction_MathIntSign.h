#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntUnaryOp.h"
#include "RigVMFunction_MathIntSign.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntSign();
};

