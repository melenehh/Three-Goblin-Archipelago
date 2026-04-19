#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionRerouteBase.h"
#include "MaterialExpressionNamedRerouteBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMaterialExpressionNamedRerouteBase : public UMaterialExpressionRerouteBase {
    GENERATED_BODY()
public:
    UMaterialExpressionNamedRerouteBase();

};

