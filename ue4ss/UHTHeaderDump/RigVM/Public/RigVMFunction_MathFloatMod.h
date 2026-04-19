#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatMod.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatMod();
};

