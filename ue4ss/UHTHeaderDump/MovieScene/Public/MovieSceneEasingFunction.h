#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieSceneEasingFunction.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMovieSceneEasingFunction : public UInterface {
    GENERATED_BODY()
};

class IMovieSceneEasingFunction : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float OnEvaluate(float Interp) const;
    
};

