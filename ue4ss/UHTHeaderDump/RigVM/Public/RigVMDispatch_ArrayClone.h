#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayClone.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayClone : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayClone();
};

