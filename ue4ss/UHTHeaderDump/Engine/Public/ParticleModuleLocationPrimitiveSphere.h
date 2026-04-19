#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleLocationPrimitiveSphere.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat StartRadius;
    
    UParticleModuleLocationPrimitiveSphere();

};

