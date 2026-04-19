#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBase.h"
#include "RigVMFunction_MathIntToName.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntToName : public FRigVMFunction_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PaddedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Result;
    
    FRigVMFunction_MathIntToName();
};

