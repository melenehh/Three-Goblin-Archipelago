#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorMod.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorMod();
};

