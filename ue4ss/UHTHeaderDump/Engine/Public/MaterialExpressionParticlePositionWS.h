#pragma once
#include "CoreMinimal.h"
#include "EPositionOrigin.h"
#include "MaterialExpression.h"
#include "MaterialExpressionParticlePositionWS.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPositionOrigin OriginType;
    
    UMaterialExpressionParticlePositionWS();

};

