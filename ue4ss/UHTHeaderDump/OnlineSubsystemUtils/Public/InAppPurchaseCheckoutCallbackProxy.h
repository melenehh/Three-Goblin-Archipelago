#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseProductRequest2.h"
#include "OnlineProxyInAppCheckoutResultDelegate.h"
#include "InAppPurchaseCheckoutCallbackProxy.generated.h"

class APlayerController;
class UInAppPurchaseCheckoutCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseCheckoutCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProxyInAppCheckoutResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProxyInAppCheckoutResult OnFailure;
    
    UInAppPurchaseCheckoutCallbackProxy();

    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCheckoutCallbackProxy* CreateProxyObjectForInAppPurchaseCheckout(APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
    
};

