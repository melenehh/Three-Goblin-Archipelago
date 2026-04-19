#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavAreaBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, MinimalAPI)
class UNavAreaBase : public UObject {
    GENERATED_BODY()
public:
    UNavAreaBase();

};

