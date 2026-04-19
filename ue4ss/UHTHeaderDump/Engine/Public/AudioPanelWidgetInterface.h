#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AudioPanelWidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAudioPanelWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IAudioPanelWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetIconBrushName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetEditorName();
    
};

