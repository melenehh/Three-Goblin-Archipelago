#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GizmoStateTarget.generated.h"

UINTERFACE(MinimalAPI)
class UGizmoStateTarget : public UInterface {
    GENERATED_BODY()
};

class IGizmoStateTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void EndUpdate() PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION()
    virtual void BeginUpdate() PURE_VIRTUAL(BeginUpdate,);
    
};

