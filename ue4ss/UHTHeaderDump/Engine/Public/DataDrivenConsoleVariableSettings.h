#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DataDrivenConsoleVariable.h"
#include "DataDrivenConsoleVariableSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class UDataDrivenConsoleVariableSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataDrivenConsoleVariable> CVarsArray;
    
    UDataDrivenConsoleVariableSettings();

};

