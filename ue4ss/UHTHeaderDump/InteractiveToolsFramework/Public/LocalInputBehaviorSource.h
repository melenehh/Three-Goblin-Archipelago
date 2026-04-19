#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBehaviorSource.h"
#include "LocalInputBehaviorSource.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class ULocalInputBehaviorSource : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
    ULocalInputBehaviorSource();


    // Fix for true pure virtual functions not being implemented
};

