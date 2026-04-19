#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseStatus.h"
#include "InAppPurchaseReceiptInfo2.h"
#include "OnlineProxyInAppCheckoutResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnlineProxyInAppCheckoutResult, EInAppPurchaseStatus, PurchaseStatus, const FInAppPurchaseReceiptInfo2&, InAppPurchaseReceipt);

