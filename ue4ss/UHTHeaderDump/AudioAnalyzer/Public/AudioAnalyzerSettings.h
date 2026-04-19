#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAssetBase.h"
#include "AudioAnalyzerSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase {
    GENERATED_BODY()
public:
    UAudioAnalyzerSettings();

};

