#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_SimBase.h"
#include "RigVMFunction_AccumulateBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_AccumulateBase : public FRigVMFunction_SimBase {
    GENERATED_BODY()
public:
    FRigVMFunction_AccumulateBase();
};

