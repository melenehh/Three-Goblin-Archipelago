#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "EOptimusSkinnedMeshExecDomain.h"
#include "OptimusSkinnedMeshExecDataProvider.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusSkinnedMeshExecDomain Domain;
    
    UOptimusSkinnedMeshExecDataProvider();

};

