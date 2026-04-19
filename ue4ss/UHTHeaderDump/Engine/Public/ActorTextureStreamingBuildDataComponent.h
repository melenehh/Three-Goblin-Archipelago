#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "ActorTextureStreamingBuildDataComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActorTextureStreamingBuildDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UActorTextureStreamingBuildDataComponent(const FObjectInitializer& ObjectInitializer);

};

