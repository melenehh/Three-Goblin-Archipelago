#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_SimBase.h"
#include "RigVMFunction_Timeline.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_Timeline : public FRigVMFunction_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    FRigVMFunction_Timeline();
};

