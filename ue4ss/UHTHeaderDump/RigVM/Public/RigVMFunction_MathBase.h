#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_MathBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBase();
};

