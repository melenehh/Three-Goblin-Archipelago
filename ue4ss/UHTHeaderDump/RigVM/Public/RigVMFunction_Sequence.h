#pragma once
#include "CoreMinimal.h"
#include "RigVMExecuteContext.h"
#include "RigVMStruct.h"
#include "RigVMFunction_Sequence.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_Sequence : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext ExecuteContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext B;
    
    FRigVMFunction_Sequence();
};

