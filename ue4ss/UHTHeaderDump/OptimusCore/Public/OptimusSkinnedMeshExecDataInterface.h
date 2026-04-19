#pragma once
#include "CoreMinimal.h"
#include "EOptimusSkinnedMeshExecDomain.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusDeprecatedExecutionDataInterface.h"
#include "OptimusSkinnedMeshExecDataInterface.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface, public IOptimusDeprecatedExecutionDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusSkinnedMeshExecDomain Domain;
    
    UOptimusSkinnedMeshExecDataInterface();


    // Fix for true pure virtual functions not being implemented
};

