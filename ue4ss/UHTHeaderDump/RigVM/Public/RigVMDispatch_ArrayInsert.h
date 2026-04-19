#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArraySetAtIndex.h"
#include "RigVMDispatch_ArrayInsert.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayInsert();
};

