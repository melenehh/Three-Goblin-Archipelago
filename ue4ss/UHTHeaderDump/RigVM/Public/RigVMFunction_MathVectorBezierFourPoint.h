#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFourPointBezier.h"
#include "RigVMFunction_MathVectorBase.h"
#include "RigVMFunction_MathVectorBezierFourPoint.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMFourPointBezier Bezier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Tangent;
    
    FRigVMFunction_MathVectorBezierFourPoint();
};

