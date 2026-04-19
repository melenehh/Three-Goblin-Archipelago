#pragma once
#include "CoreMinimal.h"
#include "ISMComponentDescriptorBase.h"
#include "SoftISMComponentDescriptor.generated.h"

class UMaterialInterface;
class URuntimeVirtualTexture;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSoftISMComponentDescriptor : public FISMComponentDescriptorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<URuntimeVirtualTexture>> RuntimeVirtualTextures;
    
    ENGINE_API FSoftISMComponentDescriptor();
};

