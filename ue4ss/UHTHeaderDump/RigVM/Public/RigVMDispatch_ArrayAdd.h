#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArraySetAtIndex.h"
#include "RigVMDispatch_ArrayAdd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayAdd : public FRigVMDispatch_ArraySetAtIndex {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayAdd();
};

