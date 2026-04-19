#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleLocationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleLocationBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleLocationBase();

};

