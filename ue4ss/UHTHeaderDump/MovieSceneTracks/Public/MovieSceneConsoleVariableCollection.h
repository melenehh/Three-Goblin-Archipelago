#pragma once
#include "CoreMinimal.h"
#include "MovieSceneConsoleVariableCollection.generated.h"

class IMovieSceneConsoleVariableTrackInterface;
class UMovieSceneConsoleVariableTrackInterface;

USTRUCT(BlueprintType)
struct FMovieSceneConsoleVariableCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieSceneConsoleVariableTrackInterface> Interface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyIncludeChecked;
    
    MOVIESCENETRACKS_API FMovieSceneConsoleVariableCollection();
};

