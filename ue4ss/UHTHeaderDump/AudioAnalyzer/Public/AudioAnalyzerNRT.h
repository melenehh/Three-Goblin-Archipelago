#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAssetBase.h"
#include "AudioAnalyzerNRT.generated.h"

class USoundWave;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationInSeconds;
    
    UAudioAnalyzerNRT();

};

