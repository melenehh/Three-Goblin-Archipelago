#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "DeveloperSettingsBackedByCVars.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UDeveloperSettingsBackedByCVars();

};

