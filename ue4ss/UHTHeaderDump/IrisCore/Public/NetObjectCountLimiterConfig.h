#pragma once
#include "CoreMinimal.h"
#include "ENetObjectCountLimiterMode.h"
#include "NetObjectPrioritizerConfig.h"
#include "NetObjectCountLimiterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Engine)
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetObjectCountLimiterMode Mode;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxObjectCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OwningConnectionPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOwnedObjectsFastLane;
    
    UNetObjectCountLimiterConfig();

};

