#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusSkinnedMeshWriteDataProvider.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMesh;
    
    UOptimusSkinnedMeshWriteDataProvider();

};

