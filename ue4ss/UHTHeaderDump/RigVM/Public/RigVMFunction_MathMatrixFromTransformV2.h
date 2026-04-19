#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigVMFunction_MathMatrixBase.h"
#include "RigVMFunction_MathMatrixFromTransformV2.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathMatrixFromTransformV2 : public FRigVMFunction_MathMatrixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix Result;
    
    FRigVMFunction_MathMatrixFromTransformV2();
};

