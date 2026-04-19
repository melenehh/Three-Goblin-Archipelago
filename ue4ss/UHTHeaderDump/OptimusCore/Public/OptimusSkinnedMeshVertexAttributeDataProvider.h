#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusSkinnedMeshVertexAttributeDataProvider.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusSkinnedMeshVertexAttributeDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UOptimusSkinnedMeshVertexAttributeDataProvider();

};

