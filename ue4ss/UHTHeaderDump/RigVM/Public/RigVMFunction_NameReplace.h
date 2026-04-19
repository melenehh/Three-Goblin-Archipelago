#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_NameBase.h"
#include "RigVMFunction_NameReplace.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_NameReplace : public FRigVMFunction_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Result;
    
    FRigVMFunction_NameReplace();
};

