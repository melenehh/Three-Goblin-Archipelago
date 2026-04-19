#pragma once
#include "CoreMinimal.h"
#include "HUD.h"
#include "DebugCameraHUD.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NonTransient)
class ADebugCameraHUD : public AHUD {
    GENERATED_BODY()
public:
    ADebugCameraHUD(const FObjectInitializer& ObjectInitializer);

};

