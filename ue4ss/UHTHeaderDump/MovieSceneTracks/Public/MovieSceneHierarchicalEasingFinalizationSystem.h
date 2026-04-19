#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneHierarchicalEasingFinalizationSystem.generated.h"

class UMovieSceneHierarchicalEasingInstantiatorSystem;

UCLASS(Blueprintable)
class UMovieSceneHierarchicalEasingFinalizationSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneHierarchicalEasingInstantiatorSystem* InstantiatorSystem;
    
public:
    UMovieSceneHierarchicalEasingFinalizationSystem();

};

