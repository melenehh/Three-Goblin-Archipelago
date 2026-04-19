#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_StringBase.h"
#include "RigVMFunction_StringContains.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StringContains : public FRigVMFunction_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_StringContains();
};

