#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EInterchangeTranslatorAssetType -FallbackName=EInterchangeTranslatorAssetType
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EInterchangeTranslatorType -FallbackName=EInterchangeTranslatorType
#include "InterchangeFilePickerParameters.h"
#include "InterchangeFilePickerBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeFilePickerBase : public UObject {
    GENERATED_BODY()
public:
    UInterchangeFilePickerBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ScriptedFilePickerForTranslatorType(const EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ScriptedFilePickerForTranslatorAssetType(const EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames);
    
};

