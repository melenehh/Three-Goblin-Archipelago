#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayFind.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayFind();
};

