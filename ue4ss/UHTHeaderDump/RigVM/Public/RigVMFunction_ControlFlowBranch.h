#pragma once
#include "CoreMinimal.h"
#include "RigVMExecuteContext.h"
#include "RigVMFunction_ControlFlowBase.h"
#include "RigVMFunction_ControlFlowBranch.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_ControlFlowBranch : public FRigVMFunction_ControlFlowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext ExecuteContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext TRUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext FALSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlockToRun;
    
    FRigVMFunction_ControlFlowBranch();
};

