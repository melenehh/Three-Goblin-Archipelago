#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaveformTransformationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UWaveformTransformationBase : public UObject {
    GENERATED_BODY()
public:
    UWaveformTransformationBase();

};

