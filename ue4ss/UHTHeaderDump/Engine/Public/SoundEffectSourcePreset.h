#pragma once
#include "CoreMinimal.h"
#include "SoundEffectPreset.h"
#include "SoundEffectSourcePreset.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class USoundEffectSourcePreset : public USoundEffectPreset {
    GENERATED_BODY()
public:
    USoundEffectSourcePreset();

};

