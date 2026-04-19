#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoScaledTransformSource.generated.h"

class IGizmoTransformSource;
class UGizmoTransformSource;

UCLASS(Blueprintable, MinimalAPI)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> ChildTransformSource;
    
    UGizmoScaledTransformSource();

};

