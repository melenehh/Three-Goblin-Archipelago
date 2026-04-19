#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathRBFInterpolateBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    FRigVMFunction_MathRBFInterpolateBase();
};

