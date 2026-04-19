#pragma once
#include "CoreMinimal.h"
#include "ISMComponentDescriptorBase.h"
#include "ISMComponentDescriptor.generated.h"

class UMaterialInterface;
class URuntimeVirtualTexture;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FISMComponentDescriptor : public FISMComponentDescriptorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    ENGINE_API FISMComponentDescriptor();
};

