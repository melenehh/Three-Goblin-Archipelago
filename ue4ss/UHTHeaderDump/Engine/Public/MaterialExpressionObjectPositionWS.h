#pragma once
#include "CoreMinimal.h"
#include "EPositionOrigin.h"
#include "MaterialExpression.h"
#include "MaterialExpressionObjectPositionWS.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPositionOrigin OriginType;
    
    UMaterialExpressionObjectPositionWS();

};

