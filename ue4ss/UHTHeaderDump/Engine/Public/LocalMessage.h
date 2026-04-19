#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LocalMessage.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ULocalMessage : public UObject {
    GENERATED_BODY()
public:
    ULocalMessage();

};

