#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigVMFunction_MathColorBase.h"
#include "RigVMFunction_MathColorFromDouble.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathColorFromDouble : public FRigVMFunction_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Result;
    
    FRigVMFunction_MathColorFromDouble();
};

