#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneParameterSectionExtender.h"
#include "MovieSceneMaterialParameterCollectionTrack.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack, public IMovieSceneEntityProvider, public IMovieSceneParameterSectionExtender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UMovieSceneMaterialParameterCollectionTrack();


    // Fix for true pure virtual functions not being implemented
};

