#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSparseVolumeTextureBase.generated.h"

class USparseVolumeTexture;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMaterialExpressionSparseVolumeTextureBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USparseVolumeTexture* SparseVolumeTexture;
    
    UMaterialExpressionSparseVolumeTextureBase();

};

