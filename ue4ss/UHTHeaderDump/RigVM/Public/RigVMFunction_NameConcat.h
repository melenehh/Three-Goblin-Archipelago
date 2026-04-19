#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_NameBase.h"
#include "RigVMFunction_NameConcat.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_NameConcat : public FRigVMFunction_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Result;
    
    FRigVMFunction_NameConcat();
};

