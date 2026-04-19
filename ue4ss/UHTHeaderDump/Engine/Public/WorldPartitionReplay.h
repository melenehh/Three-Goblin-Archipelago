#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "WorldPartitionReplay.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable, Transient)
class AWorldPartitionReplay : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> StreamingSourceNames;
    
public:
    AWorldPartitionReplay(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

