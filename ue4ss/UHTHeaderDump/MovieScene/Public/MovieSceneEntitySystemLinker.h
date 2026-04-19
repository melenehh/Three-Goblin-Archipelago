#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntitySystemGraph.h"
#include "MovieSceneEntitySystemLinker.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEntitySystemLinker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEntitySystemGraph SystemGraph;
    
    UMovieSceneEntitySystemLinker();

};

