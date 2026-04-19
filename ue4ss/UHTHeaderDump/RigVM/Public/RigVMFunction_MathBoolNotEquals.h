#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBase.h"
#include "RigVMFunction_MathBoolNotEquals.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolNotEquals : public FRigVMFunction_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_MathBoolNotEquals();
};

