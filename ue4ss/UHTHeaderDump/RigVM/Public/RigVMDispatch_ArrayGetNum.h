#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayGetNum.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayGetNum : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayGetNum();
};

