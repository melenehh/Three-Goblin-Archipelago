#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_ControlFlowBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_ControlFlowBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigVMFunction_ControlFlowBase();
};

