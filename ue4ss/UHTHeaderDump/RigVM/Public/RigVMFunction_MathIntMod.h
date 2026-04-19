#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryOp.h"
#include "RigVMFunction_MathIntMod.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntMod : public FRigVMFunction_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntMod();
};

