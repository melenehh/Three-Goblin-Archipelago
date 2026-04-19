#pragma once
#include "CoreMinimal.h"
#include "GizmoElementColorAttribute.h"
#include "GizmoElementLineRenderStateAttributes.generated.h"

USTRUCT(BlueprintType)
struct FGizmoElementLineRenderStateAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementColorAttribute LineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementColorAttribute HoverLineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementColorAttribute InteractLineColor;
    
    INTERACTIVETOOLSFRAMEWORK_API FGizmoElementLineRenderStateAttributes();
};

