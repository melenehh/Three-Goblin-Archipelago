#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathColorBinaryOp.h"
#include "RigVMFunction_MathColorSub.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathColorSub();
};

