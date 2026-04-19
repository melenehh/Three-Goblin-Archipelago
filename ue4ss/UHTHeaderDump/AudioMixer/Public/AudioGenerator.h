#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioGenerator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioGenerator : public UObject {
    GENERATED_BODY()
public:
    UAudioGenerator();

};

