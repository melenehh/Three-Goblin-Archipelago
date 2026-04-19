#pragma once
#include "CoreMinimal.h"
#include "GizmoElementCircleBase.h"
#include "GizmoElementArc.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGizmoElementArc : public UGizmoElementCircleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InnerRadius;
    
public:
    UGizmoElementArc();

};

