#pragma once
#include "CoreMinimal.h"
#include "NetObjectPrioritizerConfig.h"
#include "SphereNetObjectPrioritizerConfig.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutsidePriority;
    
    USphereNetObjectPrioritizerConfig();

};

