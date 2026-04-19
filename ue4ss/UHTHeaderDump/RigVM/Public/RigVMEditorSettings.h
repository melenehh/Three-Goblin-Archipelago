#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RigVMEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class RIGVM_API URigVMEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    URigVMEditorSettings();

};

