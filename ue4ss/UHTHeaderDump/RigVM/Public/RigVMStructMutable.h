#pragma once
#include "CoreMinimal.h"
#include "RigVMExecuteContext.h"
#include "RigVMStruct.h"
#include "RigVMStructMutable.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMStructMutable : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecuteContext ExecuteContext;
    
    FRigVMStructMutable();
};

