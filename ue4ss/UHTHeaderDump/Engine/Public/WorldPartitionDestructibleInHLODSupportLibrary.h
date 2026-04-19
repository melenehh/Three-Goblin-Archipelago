#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "WorldPartitionDestructibleInHLODSupportLibrary.generated.h"

class IWorldPartitionDestructibleInHLODInterface;
class UWorldPartitionDestructibleInHLODInterface;

UCLASS(Blueprintable, MinimalAPI)
class UWorldPartitionDestructibleInHLODSupportLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldPartitionDestructibleInHLODSupportLibrary();

    UFUNCTION(BlueprintCallable)
    static void DestroyInHLOD(const TScriptInterface<IWorldPartitionDestructibleInHLODInterface>& DestructibleInHLOD);
    
    UFUNCTION(BlueprintCallable)
    static void DamageInHLOD(const TScriptInterface<IWorldPartitionDestructibleInHLODInterface>& DestructibleInHLOD, float DamagePercent);
    
};

