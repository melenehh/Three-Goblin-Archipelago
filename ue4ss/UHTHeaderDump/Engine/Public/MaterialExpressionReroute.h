#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionRerouteBase.h"
#include "MaterialExpressionReroute.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionReroute : public UMaterialExpressionRerouteBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UMaterialExpressionReroute();

};

