#pragma once
#include "CoreMinimal.h"
#include "EPositionOrigin.h"
#include "MaterialExpression.h"
#include "MaterialExpressionActorPositionWS.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionActorPositionWS : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPositionOrigin OriginType;
    
    UMaterialExpressionActorPositionWS();

};

