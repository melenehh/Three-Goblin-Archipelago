#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArraySetNum.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArraySetNum : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArraySetNum();
};

