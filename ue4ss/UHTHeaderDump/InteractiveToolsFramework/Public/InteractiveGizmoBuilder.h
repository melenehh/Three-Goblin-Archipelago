#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveGizmoBuilder.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UInteractiveGizmoBuilder : public UObject {
    GENERATED_BODY()
public:
    UInteractiveGizmoBuilder();

};

