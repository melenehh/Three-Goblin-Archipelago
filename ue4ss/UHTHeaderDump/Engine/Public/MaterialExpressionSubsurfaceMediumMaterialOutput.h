#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCustomOutput.h"
#include "MaterialExpressionSubsurfaceMediumMaterialOutput.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSubsurfaceMediumMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput MeanFreePath;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ScatteringDistribution;
    
    UMaterialExpressionSubsurfaceMediumMaterialOutput();

};

