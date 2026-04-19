#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "ApplicationLifecycleComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UApplicationLifecycleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationWillDeactivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationHasReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationWillEnterBackgroundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationHasEnteredForegroundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationWillTerminateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationShouldUnloadResourcesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTemperatureChangeDelegate OnTemperatureChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLowPowerModeDelegate OnLowPowerModeDelegate;
    
    UApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer);

};

