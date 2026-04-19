#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInputBehavior : public UObject {
    GENERATED_BODY()
public:
    UInputBehavior();

};

