#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionSparseVolumeTextureSampleParameter.h"
#include "MaterialExpressionSparseVolumeTextureObjectParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSparseVolumeTextureObjectParameter : public UMaterialExpressionSparseVolumeTextureSampleParameter {
    GENERATED_BODY()
public:
    UMaterialExpressionSparseVolumeTextureObjectParameter();

};

