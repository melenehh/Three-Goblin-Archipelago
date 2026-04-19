#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneTrackInstanceSystem.generated.h"

class UMovieSceneTrackInstanceInstantiator;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneTrackInstanceInstantiator* Instantiator;
    
public:
    UMovieSceneTrackInstanceSystem();

};

