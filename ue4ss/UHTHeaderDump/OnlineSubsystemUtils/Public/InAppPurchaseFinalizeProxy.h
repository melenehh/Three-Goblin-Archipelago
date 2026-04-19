#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseReceiptInfo2.h"
#include "InAppPurchaseFinalizeProxy.generated.h"

class APlayerController;
class UInAppPurchaseFinalizeProxy;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseFinalizeProxy : public UObject {
    GENERATED_BODY()
public:
    UInAppPurchaseFinalizeProxy();

    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseFinalizeProxy* CreateProxyObjectForInAppPurchaseFinalize(const FInAppPurchaseReceiptInfo2& InAppPurchaseReceipt, APlayerController* PlayerController);
    
};

