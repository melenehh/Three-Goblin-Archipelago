#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoAxisSource.generated.h"

UINTERFACE(MinimalAPI)
class UGizmoAxisSource : public UInterface {
    GENERATED_BODY()
};

class IGizmoAxisSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool HasTangentVectors() const PURE_VIRTUAL(HasTangentVectors, return false;);
    
    UFUNCTION()
    virtual void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const PURE_VIRTUAL(GetTangentVectors,);
    
    UFUNCTION()
    virtual FVector GetOrigin() const PURE_VIRTUAL(GetOrigin, return FVector{};);
    
    UFUNCTION()
    virtual FVector GetDirection() const PURE_VIRTUAL(GetDirection, return FVector{};);
    
};

