#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionStrataUtilityBase.h"
#include "MaterialExpressionStrataThinFilm.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionStrataThinFilm : public UMaterialExpressionStrataUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput F0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput F90;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Thickness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput IOR;
    
    UMaterialExpressionStrataThinFilm();

};

