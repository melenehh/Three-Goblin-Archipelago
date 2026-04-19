#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatSin.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatSin : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatSin();
};

