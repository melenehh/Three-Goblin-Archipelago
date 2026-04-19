#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoTransformProxyTransformSource.generated.h"

class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* Proxy;
    
    UGizmoTransformProxyTransformSource();

};

