#pragma once
#include "CoreMinimal.h"
#include "GizmoElementCircleBase.h"
#include "GizmoElementCircle.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGizmoElementCircle : public UGizmoElementCircleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitLine;
    
public:
    UGizmoElementCircle();

};

