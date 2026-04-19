#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "PlatformEventsComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlatformEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlatformEventDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformEventDelegate PlatformChangedToLaptopModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformEventDelegate PlatformChangedToTabletModeDelegate;
    
    UPlatformEventsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SupportsConvertibleLaptops();
    
    UFUNCTION(BlueprintCallable)
    bool IsInTabletMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsInLaptopMode();
    
};

