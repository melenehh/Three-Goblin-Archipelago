#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTruncateLWC.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionTruncateLWC : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UMaterialExpressionTruncateLWC();

};

