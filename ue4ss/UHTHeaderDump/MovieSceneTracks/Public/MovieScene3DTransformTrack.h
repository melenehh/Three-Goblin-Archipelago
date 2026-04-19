#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystemSupport -FallbackName=MovieSceneBlenderSystemSupport
#include "MovieScenePropertyTrack.h"
#include "Templates/SubclassOf.h"
#include "MovieScene3DTransformTrack.generated.h"

class UMovieSceneBlenderSystem;

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack, public IMovieSceneBlenderSystemSupport {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieSceneBlenderSystem> BlenderSystemClass;
    
public:
    UMovieScene3DTransformTrack();


    // Fix for true pure virtual functions not being implemented
};

