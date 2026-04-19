#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathDoubleBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleBase();
};

