#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_MakeStruct.h"
#include "RigVMDispatch_BreakStruct.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_BreakStruct : public FRigVMDispatch_MakeStruct {
    GENERATED_BODY()
public:
    FRigVMDispatch_BreakStruct();
};

