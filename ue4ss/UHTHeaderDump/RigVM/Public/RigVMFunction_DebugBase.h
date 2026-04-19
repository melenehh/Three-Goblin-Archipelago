#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_DebugBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_DebugBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigVMFunction_DebugBase();
};

