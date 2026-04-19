#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryTypes.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UEnvQueryTypes : public UObject {
    GENERATED_BODY()
public:
    UEnvQueryTypes();

};

