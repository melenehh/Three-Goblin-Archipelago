#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "SingleClickOrDragInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginDragIfClickTargetNotHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClickDistanceThreshold;
    
    USingleClickOrDragInputBehavior();

};

