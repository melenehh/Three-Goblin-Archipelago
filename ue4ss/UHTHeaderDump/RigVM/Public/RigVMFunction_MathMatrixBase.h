#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathMatrixBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    FRigVMFunction_MathMatrixBase();
};

