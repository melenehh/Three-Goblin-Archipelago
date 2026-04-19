#pragma once
#include "CoreMinimal.h"
#include "AnimDataModelNotifPayload.h"
#include "EAnimDataModelNotifyType.h"
#include "AnimDataModelModifiedDynamicEventDelegate.generated.h"

class IAnimationDataModel;
class UAnimationDataModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAnimDataModelModifiedDynamicEvent, EAnimDataModelNotifyType, NotifType, TScriptInterface<IAnimationDataModel>, Model, const FAnimDataModelNotifPayload&, Payload);

