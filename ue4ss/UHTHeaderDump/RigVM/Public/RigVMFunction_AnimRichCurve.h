#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigVMFunction_AnimBase.h"
#include "RigVMFunction_AnimRichCurve.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_AnimRichCurve : public FRigVMFunction_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    FRigVMFunction_AnimRichCurve();
};

