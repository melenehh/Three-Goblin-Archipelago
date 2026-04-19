#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGizmoElementPartialType.h"
#include "GizmoElementLineBase.h"
#include "GizmoElementCircleBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class UGizmoElementCircleBase : public UGizmoElementLineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Axis0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Axis1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSegments;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGizmoElementPartialType PartialType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PartialStartAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PartialEndAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PartialViewDependentMaxCosTol;
    
public:
    UGizmoElementCircleBase();

};

