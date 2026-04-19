#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpressionTextureSampleParameter2D -FallbackName=MaterialExpressionTextureSampleParameter2D
#include "EMAterialXTextureSampleBlurKernel.h"
#include "EMaterialXTextureSampleBlurFilter.h"
#include "MaterialExpressionMaterialXTextureSampleParameterBlur.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAterialXTextureSampleBlurKernel KernelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialXTextureSampleBlurFilter Filter;
    
    UMaterialExpressionMaterialXTextureSampleParameterBlur();

};

