#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENetFilterType.h"
#include "NetObjectFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient, Config=Engine)
class UNetObjectFilterConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetFilterType FilterType;
    
    UNetObjectFilterConfig();

};

