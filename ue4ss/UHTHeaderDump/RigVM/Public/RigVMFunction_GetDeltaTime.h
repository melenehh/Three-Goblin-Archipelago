#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_AnimBase.h"
#include "RigVMFunction_GetDeltaTime.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_GetDeltaTime : public FRigVMFunction_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRigVMFunction_GetDeltaTime();
};

