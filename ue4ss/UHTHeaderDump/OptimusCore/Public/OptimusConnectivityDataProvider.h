#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusConnectivityDataProvider.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusConnectivityDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMesh;
    
    UOptimusConnectivityDataProvider();

};

