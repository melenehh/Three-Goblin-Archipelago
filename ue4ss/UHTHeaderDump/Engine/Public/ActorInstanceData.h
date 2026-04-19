#pragma once
#include "CoreMinimal.h"
#include "InstanceCacheDataBase.h"
#include "Templates/SubclassOf.h"
#include "ActorInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorInstanceData : public FInstanceCacheDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
public:
    ENGINE_API FActorInstanceData();
};

