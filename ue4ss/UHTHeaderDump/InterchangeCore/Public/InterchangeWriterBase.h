#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeWriterBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeWriterBase : public UObject {
    GENERATED_BODY()
public:
    UInterchangeWriterBase();

};

