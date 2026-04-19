#pragma once
#include "CoreMinimal.h"
#include "RigVMExecuteContext.h"
#include "RigVMStruct.h"
#include "RigVMFunction_UserDefinedEvent.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_UserDefinedEvent : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext ExecuteContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    FRigVMFunction_UserDefinedEvent();
};

