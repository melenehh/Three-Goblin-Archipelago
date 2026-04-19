#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigDispatch_FromString.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_FromString : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    RIGVM_API FRigDispatch_FromString();
};

