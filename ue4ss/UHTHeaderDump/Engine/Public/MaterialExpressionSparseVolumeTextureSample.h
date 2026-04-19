#pragma once
#include "CoreMinimal.h"
#include "ESamplerSourceMode.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSparseVolumeTextureBase.h"
#include "MaterialExpressionSparseVolumeTextureSample.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSparseVolumeTextureSample : public UMaterialExpressionSparseVolumeTextureBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput TextureObject;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput MipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESamplerSourceMode> SamplerSource;
    
    UMaterialExpressionSparseVolumeTextureSample();

};

