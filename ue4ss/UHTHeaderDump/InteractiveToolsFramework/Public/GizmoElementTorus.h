#pragma once
#include "CoreMinimal.h"
#include "GizmoElementCircleBase.h"
#include "GizmoElementTorus.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGizmoElementTorus : public UGizmoElementCircleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInnerSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndCaps;
    
public:
    UGizmoElementTorus();

};

