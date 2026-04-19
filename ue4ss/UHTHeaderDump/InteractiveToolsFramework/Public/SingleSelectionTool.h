#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "InteractiveToolCameraFocusAPI.h"
#include "SingleSelectionTool.generated.h"

class UToolTarget;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleSelectionTool : public UInteractiveTool, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UToolTarget* Target;
    
public:
    USingleSelectionTool();


    // Fix for true pure virtual functions not being implemented
};

