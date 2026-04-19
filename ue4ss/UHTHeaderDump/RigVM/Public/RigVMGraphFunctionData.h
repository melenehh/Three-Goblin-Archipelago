#pragma once
#include "CoreMinimal.h"
#include "RigVMFunctionCompilationData.h"
#include "RigVMGraphFunctionHeader.h"
#include "RigVMGraphFunctionData.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMGraphFunctionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMGraphFunctionHeader Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMFunctionCompilationData CompilationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SerializedCollapsedNode;
    
    FRigVMGraphFunctionData();
};

