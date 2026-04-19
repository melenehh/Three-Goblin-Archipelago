#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAssetBase.h"
#include "AudioAnalyzerNRTSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase {
    GENERATED_BODY()
public:
    UAudioAnalyzerNRTSettings();

};

