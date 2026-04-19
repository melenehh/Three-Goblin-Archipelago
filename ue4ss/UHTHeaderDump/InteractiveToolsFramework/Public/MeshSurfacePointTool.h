#pragma once
#include "CoreMinimal.h"
#include "SingleSelectionTool.h"
#include "MeshSurfacePointTool.generated.h"

class UWorld;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSurfacePointTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> TargetWorld;
    
public:
    UMeshSurfacePointTool();

};

