#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseStatus.h"
#include "InAppPurchaseReceiptInfo2.h"
#include "OnlineProxyInAppReceiptsResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnlineProxyInAppReceiptsResult, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>&, InAppPurchaseReceipts);

