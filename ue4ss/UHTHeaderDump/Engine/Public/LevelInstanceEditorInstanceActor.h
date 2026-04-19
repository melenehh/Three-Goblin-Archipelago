#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LevelInstanceEditorInstanceActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable, Transient)
class ALevelInstanceEditorInstanceActor : public AActor {
    GENERATED_BODY()
public:
    ALevelInstanceEditorInstanceActor(const FObjectInitializer& ObjectInitializer);

};

