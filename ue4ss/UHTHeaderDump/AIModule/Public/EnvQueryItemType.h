#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryItemType.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UEnvQueryItemType : public UObject {
    GENERATED_BODY()
public:
    UEnvQueryItemType();

};

