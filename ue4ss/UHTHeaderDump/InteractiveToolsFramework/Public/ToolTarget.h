#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolTarget.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UToolTarget : public UObject {
    GENERATED_BODY()
public:
    UToolTarget();

};

