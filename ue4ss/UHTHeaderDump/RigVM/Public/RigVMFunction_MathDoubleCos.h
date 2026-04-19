#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleCos.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleCos : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleCos();
};

