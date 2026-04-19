#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathMutableBase.h"
#include "RigVMFunction_MathTransformMutableBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathTransformMutableBase : public FRigVMFunction_MathMutableBase {
    GENERATED_BODY()
public:
    FRigVMFunction_MathTransformMutableBase();
};

