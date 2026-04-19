#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigVMFunction_DebugTransformArrayMutable_WorkData.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_DebugTransformArrayMutable_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> DrawTransforms;
    
    FRigVMFunction_DebugTransformArrayMutable_WorkData();
};

