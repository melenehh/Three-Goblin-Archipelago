#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "LevelSequenceBurnInOptions.generated.h"

class ULevelSequenceBurnInInitSettings;

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI, PerObjectConfig, Config=EditorPerProjectUserSettings)
class ULevelSequenceBurnInOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBurnIn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath BurnInClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelSequenceBurnInInitSettings* Settings;
    
    ULevelSequenceBurnInOptions();

    UFUNCTION(BlueprintCallable)
    void SetBurnIn(FSoftClassPath InBurnInClass);
    
};

