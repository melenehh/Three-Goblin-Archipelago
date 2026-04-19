#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_AnimBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_AnimBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigVMFunction_AnimBase();
};

