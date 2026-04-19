#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryOp.h"
#include "RigVMFunction_MathBoolNand.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolNand : public FRigVMFunction_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBoolNand();
};

