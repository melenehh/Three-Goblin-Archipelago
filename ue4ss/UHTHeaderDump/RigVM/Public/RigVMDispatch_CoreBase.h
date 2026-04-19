#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigVMDispatch_CoreBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_CoreBase : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    FRigVMDispatch_CoreBase();
};

