#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMEditorSettings -FallbackName=RigVMEditorSettings
#include "ControlRigEditorSettings.generated.h"

UCLASS(Blueprintable)
class CONTROLRIG_API UControlRigEditorSettings : public URigVMEditorSettings {
    GENERATED_BODY()
public:
    UControlRigEditorSettings();

};

