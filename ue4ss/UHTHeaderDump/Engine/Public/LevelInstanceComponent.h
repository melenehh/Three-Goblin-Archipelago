#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "LevelInstanceComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULevelInstanceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULevelInstanceComponent(const FObjectInitializer& ObjectInitializer);

};

