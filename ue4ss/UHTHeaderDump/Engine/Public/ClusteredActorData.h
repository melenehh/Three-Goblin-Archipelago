#pragma once
#include "CoreMinimal.h"
#include "ClusteredActorData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FClusteredActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UPrimitiveComponent>> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasReplicatingMovement;
    
    ENGINE_API FClusteredActorData();
};

