#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleLawOfCosine.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleLawOfCosine : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double C;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AlphaAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BetaAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GammaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    FRigVMFunction_MathDoubleLawOfCosine();
};

