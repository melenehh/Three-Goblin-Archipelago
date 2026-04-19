#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusGraphVariableDescription.h"
#include "OptimusGraphDataProvider.generated.h"

class UMeshComponent;
class UOptimusDeformerInstance;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGraphDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformerInstance* DeformerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusGraphVariableDescription> Variables;
    
    UOptimusGraphDataProvider();

};

