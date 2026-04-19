#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "MovieSceneTransformOrigin.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMovieSceneTransformOrigin : public UInterface {
    GENERATED_BODY()
};

class IMovieSceneTransformOrigin : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform BP_GetTransformOrigin() const;
    
};

