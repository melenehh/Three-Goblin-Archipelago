#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystemGraphNodes.h"
#include "MovieSceneEntitySystemGraph.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEntitySystemGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEntitySystemGraphNodes Nodes;
    
public:
    MOVIESCENE_API FMovieSceneEntitySystemGraph();
};

