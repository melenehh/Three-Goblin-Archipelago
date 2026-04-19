#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionStrataBSDF.h"
#include "MaterialExpressionStrataSimpleClearCoatBSDF.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionStrataSimpleClearCoatBSDF : public UMaterialExpressionStrataBSDF {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput DiffuseAlbedo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput F0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Roughness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ClearCoatCoverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ClearCoatRoughness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput EmissiveColor;
    
    UMaterialExpressionStrataSimpleClearCoatBSDF();

};

