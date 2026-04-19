#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineProxyInAppReceiptsResultDelegate.h"
#include "InAppPurchaseReceiptsCallbackProxy.generated.h"

class APlayerController;
class UInAppPurchaseReceiptsCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseReceiptsCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProxyInAppReceiptsResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineProxyInAppReceiptsResult OnFailure;
    
    UInAppPurchaseReceiptsCallbackProxy();

    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseQueryOwnedProducts(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseGetKnownReceipts(APlayerController* PlayerController);
    
};

