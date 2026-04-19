#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ChaosEventListenerComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChaosEventListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UChaosEventListenerComponent(const FObjectInitializer& ObjectInitializer);

};

