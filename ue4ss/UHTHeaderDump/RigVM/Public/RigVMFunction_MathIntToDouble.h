#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBase.h"
#include "RigVMFunction_MathIntToDouble.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntToDouble : public FRigVMFunction_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    FRigVMFunction_MathIntToDouble();
};

