#pragma once
#include "CoreMinimal.h"
#include "InternalToolFrameworkActor.h"
#include "GizmoActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AGizmoActor : public AInternalToolFrameworkActor {
    GENERATED_BODY()
public:
    AGizmoActor(const FObjectInitializer& ObjectInitializer);

};

