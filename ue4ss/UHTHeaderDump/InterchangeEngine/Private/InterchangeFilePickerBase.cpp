#include "InterchangeFilePickerBase.h"

UInterchangeFilePickerBase::UInterchangeFilePickerBase() {
}

bool UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorType_Implementation(const EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames) {
    return false;
}

bool UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorAssetType_Implementation(const EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames) {
    return false;
}


