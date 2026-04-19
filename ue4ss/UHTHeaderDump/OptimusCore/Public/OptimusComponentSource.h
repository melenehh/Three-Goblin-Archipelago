#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptimusComponentSource.generated.h"

UCLASS(Abstract, Blueprintable)
class OPTIMUSCORE_API UOptimusComponentSource : public UObject {
    GENERATED_BODY()
public:
    UOptimusComponentSource();

};

