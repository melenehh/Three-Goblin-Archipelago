#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_ArrayBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayBase();
};

