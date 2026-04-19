#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "DefaultAudioBusSettings.generated.h"

USTRUCT(BlueprintType)
struct FDefaultAudioBusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AudioBus;
    
    ENGINE_API FDefaultAudioBusSettings();
};

