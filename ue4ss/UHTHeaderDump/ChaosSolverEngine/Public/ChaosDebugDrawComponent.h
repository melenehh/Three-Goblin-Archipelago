#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ChaosDebugDrawComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChaosDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UChaosDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

