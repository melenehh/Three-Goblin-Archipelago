#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "PhysicsFieldComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhysicsFieldComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPhysicsFieldComponent(const FObjectInitializer& ObjectInitializer);

};

