#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformSettings.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, PerObjectConfig)
class UPlatformSettings : public UObject {
    GENERATED_BODY()
public:
    UPlatformSettings();

};

