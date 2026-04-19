#pragma once
#include "CoreMinimal.h"
#include "RigVMExtendedExecuteContext.generated.h"

class URigVM;

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMExtendedExecuteContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 VMHash;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 NumExecutions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URigVM* DeferredVMToCopy;
    
    FRigVMExtendedExecuteContext();
};

