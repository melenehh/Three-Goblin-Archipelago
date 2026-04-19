#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryContext.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UEnvQueryContext : public UObject {
    GENERATED_BODY()
public:
    UEnvQueryContext();

};

