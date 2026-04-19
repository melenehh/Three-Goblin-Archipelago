#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieSceneBoundObjectProxy.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UMovieSceneBoundObjectProxy : public UInterface {
    GENERATED_BODY()
};

class IMovieSceneBoundObjectProxy : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* BP_GetBoundObjectForSequencer(UObject* ResolvedObject);
    
};

