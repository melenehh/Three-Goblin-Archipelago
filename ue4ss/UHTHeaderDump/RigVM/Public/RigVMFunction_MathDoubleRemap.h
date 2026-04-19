#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleRemap.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleRemap : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SourceMinimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SourceMaximum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetMinimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    FRigVMFunction_MathDoubleRemap();
};

