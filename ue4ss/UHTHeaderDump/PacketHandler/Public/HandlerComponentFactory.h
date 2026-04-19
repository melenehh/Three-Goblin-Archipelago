#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HandlerComponentFactory.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UHandlerComponentFactory : public UObject {
    GENERATED_BODY()
public:
    UHandlerComponentFactory();

};

