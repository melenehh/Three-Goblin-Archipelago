#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EngineTypes.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UEngineTypes : public UObject {
    GENERATED_BODY()
public:
    UEngineTypes();

};

