#pragma once
#include "CoreMinimal.h"
#include "AudioQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct FAudioQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChannels;
    
    ENGINE_API FAudioQualitySettings();
};

