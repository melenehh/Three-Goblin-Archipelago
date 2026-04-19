#pragma once
#include "CoreMinimal.h"
#include "EPathTracingBufferTextureId.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionPathTracingBufferTexture.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionPathTracingBufferTexture : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPathTracingBufferTextureId> PathTracingBufferTextureId;
    
    UMaterialExpressionPathTracingBufferTexture();

};

