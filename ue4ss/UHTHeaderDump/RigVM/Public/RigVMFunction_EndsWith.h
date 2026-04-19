#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_NameBase.h"
#include "RigVMFunction_EndsWith.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_EndsWith : public FRigVMFunction_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Ending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_EndsWith();
};

