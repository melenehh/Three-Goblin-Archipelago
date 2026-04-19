#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_NameBase.h"
#include "RigVMFunction_NameTruncate.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_NameTruncate : public FRigVMFunction_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FromEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Remainder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Chopped;
    
    FRigVMFunction_NameTruncate();
};

