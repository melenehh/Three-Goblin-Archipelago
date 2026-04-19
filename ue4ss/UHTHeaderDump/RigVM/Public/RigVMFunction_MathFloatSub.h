#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatSub.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatSub();
};

