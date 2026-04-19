#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleColorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleColorBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleColorBase();

};

