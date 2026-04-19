#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WorldPartitionHLODDestructionTag.h"
#include "WorldPartitionDestructibleInHLODInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWorldPartitionDestructibleInHLODInterface : public UInterface {
    GENERATED_BODY()
};

class IWorldPartitionDestructibleInHLODInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHLODDestructionTag(const FWorldPartitionHLODDestructionTag& InDestructionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FWorldPartitionHLODDestructionTag GetHLODDestructionTag() const;
    
};

