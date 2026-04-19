#pragma once
#include "CoreMinimal.h"
#include "ERigHierarchyNotification.h"
#include "RigElementKey.h"
#include "RigHierarchyModifiedDynamicEventDelegate.generated.h"

class URigHierarchy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRigHierarchyModifiedDynamicEvent, ERigHierarchyNotification, NotifType, URigHierarchy*, Hierarchy, FRigElementKey, Subject);

