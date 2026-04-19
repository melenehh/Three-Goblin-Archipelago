#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneEnumTrack.generated.h"

class UEnum;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    UMovieSceneEnumTrack();

};

