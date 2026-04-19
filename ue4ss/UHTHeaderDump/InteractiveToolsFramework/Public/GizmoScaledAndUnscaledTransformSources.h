#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoScaledAndUnscaledTransformSources.generated.h"

class IGizmoTransformSource;
class UGizmoTransformSource;

UCLASS(Blueprintable, MinimalAPI)
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> ScaledTransformSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> UnscaledTransformSource;
    
    UGizmoScaledAndUnscaledTransformSources();

};

