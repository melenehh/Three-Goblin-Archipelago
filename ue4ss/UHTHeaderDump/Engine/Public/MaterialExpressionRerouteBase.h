#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionRerouteBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMaterialExpressionRerouteBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionRerouteBase();

};

