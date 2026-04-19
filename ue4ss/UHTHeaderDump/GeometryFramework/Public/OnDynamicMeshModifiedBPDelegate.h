#pragma once
#include "CoreMinimal.h"
#include "OnDynamicMeshModifiedBPDelegate.generated.h"

class UDynamicMesh;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDynamicMeshModifiedBP, UDynamicMesh*, Mesh);

