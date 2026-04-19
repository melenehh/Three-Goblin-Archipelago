#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ClusterUnionActor.generated.h"

class UClusterUnionComponent;

UCLASS(Blueprintable, MinimalAPI)
class AClusterUnionActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClusterUnionComponent* ClusterUnion;
    
public:
    AClusterUnionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UClusterUnionComponent* GetClusterUnionComponent() const;
    
};

