#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoTransformSource.generated.h"

UINTERFACE(MinimalAPI)
class UGizmoTransformSource : public UInterface {
    GENERATED_BODY()
};

class IGizmoTransformSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetTransform(const FTransform& NewTransform) PURE_VIRTUAL(SetTransform,);
    
    UFUNCTION()
    virtual FTransform GetTransform() const PURE_VIRTUAL(GetTransform, return FTransform{};);
    
};

