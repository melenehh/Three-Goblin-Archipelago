#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolWithToolTargetsBuilder.h"
#include "MeshSurfacePointToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UMeshSurfacePointToolBuilder();

};

