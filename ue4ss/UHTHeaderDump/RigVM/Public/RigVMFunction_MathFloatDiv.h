#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBinaryOp.h"
#include "RigVMFunction_MathFloatDiv.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatDiv();
};

