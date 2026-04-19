#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleTan.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleTan : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleTan();
};

