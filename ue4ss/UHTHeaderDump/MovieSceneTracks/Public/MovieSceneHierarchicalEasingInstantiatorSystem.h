#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneHierarchicalEasingInstantiatorSystem.generated.h"

class UWeightAndEasingEvaluatorSystem;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeightAndEasingEvaluatorSystem* EvaluatorSystem;
    
public:
    UMovieSceneHierarchicalEasingInstantiatorSystem();

};

