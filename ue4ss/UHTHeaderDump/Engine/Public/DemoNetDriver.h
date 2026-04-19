#pragma once
#include "CoreMinimal.h"
#include "MulticastRecordOptions.h"
#include "NetDriver.h"
#include "RollbackNetStartupActorInfo.h"
#include "DemoNetDriver.generated.h"

class APlayerController;

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Engine)
class UDemoNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckpointSaveMaxMSPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMulticastRecordOptions> MulticastRecordOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> SpectatorControllers;
    
public:
    UDemoNetDriver();

};

