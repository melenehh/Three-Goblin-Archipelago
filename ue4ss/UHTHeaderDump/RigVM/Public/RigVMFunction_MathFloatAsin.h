#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatAsin.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatAsin : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatAsin();
};

