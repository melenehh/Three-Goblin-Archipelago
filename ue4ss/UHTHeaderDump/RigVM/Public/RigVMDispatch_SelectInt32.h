#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_SelectInt32.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_SelectInt32 : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_SelectInt32();
};

