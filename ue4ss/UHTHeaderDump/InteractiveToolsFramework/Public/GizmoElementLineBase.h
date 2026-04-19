#pragma once
#include "CoreMinimal.h"
#include "GizmoElementBase.h"
#include "GizmoElementLineRenderStateAttributes.h"
#include "GizmoElementLineBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class UGizmoElementLineBase : public UGizmoElementBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementLineRenderStateAttributes LineRenderAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScreenSpaceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverLineThicknessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractLineThicknessMultiplier;
    
public:
    UGizmoElementLineBase();

};

