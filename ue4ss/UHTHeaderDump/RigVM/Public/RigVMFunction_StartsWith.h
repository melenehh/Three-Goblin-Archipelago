#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_NameBase.h"
#include "RigVMFunction_StartsWith.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StartsWith : public FRigVMFunction_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_StartsWith();
};

