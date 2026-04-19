#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBinaryOp.h"
#include "RigVMFunction_MathDoubleDiv.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleDiv();
};

