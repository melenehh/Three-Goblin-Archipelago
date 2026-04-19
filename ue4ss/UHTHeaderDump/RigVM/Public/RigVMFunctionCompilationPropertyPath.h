#pragma once
#include "CoreMinimal.h"
#include "RigVMFunctionCompilationPropertyPath.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunctionCompilationPropertyPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropertyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeadCPPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentPath;
    
    RIGVM_API FRigVMFunctionCompilationPropertyPath();
};

