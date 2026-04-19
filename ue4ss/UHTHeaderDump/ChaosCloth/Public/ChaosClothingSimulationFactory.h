#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothingSimulationFactory -FallbackName=ClothingSimulationFactory
#include "ChaosClothingSimulationFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory {
    GENERATED_BODY()
public:
    UChaosClothingSimulationFactory();

};

