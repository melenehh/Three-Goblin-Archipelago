#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_NoiseVector2.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_NoiseVector2 : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Minimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Time;
    
    FRigVMFunction_NoiseVector2();
};

