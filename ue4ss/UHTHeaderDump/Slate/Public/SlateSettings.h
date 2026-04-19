#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class USlateSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplicitCanvasChildZOrder;
    
    USlateSettings();

};

