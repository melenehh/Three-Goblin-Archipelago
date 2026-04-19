#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_Constant.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_Constant : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_Constant();
};

