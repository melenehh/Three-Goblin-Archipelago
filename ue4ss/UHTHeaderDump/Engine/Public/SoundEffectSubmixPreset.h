#pragma once
#include "CoreMinimal.h"
#include "SoundEffectPreset.h"
#include "SoundEffectSubmixPreset.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class USoundEffectSubmixPreset : public USoundEffectPreset {
    GENERATED_BODY()
public:
    USoundEffectSubmixPreset();

};

