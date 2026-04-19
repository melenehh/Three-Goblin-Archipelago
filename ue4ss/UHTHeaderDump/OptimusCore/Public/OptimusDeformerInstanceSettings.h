#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformerInstanceSettings -FallbackName=MeshDeformerInstanceSettings
#include "OptimusDeformerInstanceComponentBinding.h"
#include "OptimusDeformerInstanceSettings.generated.h"

class UOptimusDeformer;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusDeformer> Deformer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FOptimusDeformerInstanceComponentBinding> Bindings;
    
public:
    UOptimusDeformerInstanceSettings();

};

