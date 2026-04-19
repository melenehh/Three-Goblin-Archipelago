#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoClickTarget.h"
#include "GizmoComponentHitTarget.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class UGizmoComponentHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UGizmoComponentHitTarget();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void UpdateInteractingState(bool bInteracting) override PURE_VIRTUAL(UpdateInteractingState,);
    
    UFUNCTION()
    void UpdateHoverState(bool bHovering) override PURE_VIRTUAL(UpdateHoverState,);
    
};

