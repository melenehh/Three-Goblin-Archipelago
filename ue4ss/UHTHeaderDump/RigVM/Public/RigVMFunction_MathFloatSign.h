#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatUnaryOp.h"
#include "RigVMFunction_MathFloatSign.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatSign : public FRigVMFunction_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatSign();
};

