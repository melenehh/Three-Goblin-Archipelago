#pragma once
#include "CoreMinimal.h"
#include "LandscapeProxy.h"
#include "LandscapeStreamingProxy.generated.h"

class ALandscape;

UCLASS(Blueprintable, MinimalAPI)
class ALandscapeStreamingProxy : public ALandscapeProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALandscape> LandscapeActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> OverriddenSharedProperties;
    
public:
    ALandscapeStreamingProxy(const FObjectInitializer& ObjectInitializer);

};

