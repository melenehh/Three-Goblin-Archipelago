#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ActorComponent.h"
#include "EStreamingSourcePriority.h"
#include "EStreamingSourceTargetBehavior.h"
#include "EStreamingSourceTargetState.h"
#include "StreamingSourceShape.h"
#include "WorldPartitionStreamingSourceComponent.generated.h"

class UHLODLayer;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWorldPartitionStreamingSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingSourceTargetBehavior TargetBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHLODLayer*> TargetHLODLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHLODLayer* TargetHLODLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamingSourceShape> Shapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingSourcePriority Priority;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreamingSourceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingSourceTargetState TargetState;
    
public:
    UWorldPartitionStreamingSourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingSourceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableStreamingSource();
    
    UFUNCTION(BlueprintCallable)
    void DisableStreamingSource();
    
};

