#pragma once
#include "CoreMinimal.h"
#include "CombinedTransformGizmo.h"
#include "RepositionableTransformGizmo.generated.h"

class UGizmoTransformChangeStateTarget;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URepositionableTransformGizmo : public UCombinedTransformGizmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoTransformChangeStateTarget* RepositionStateTarget;
    
public:
    URepositionableTransformGizmo();

};

