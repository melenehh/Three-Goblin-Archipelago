#include "MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h"

UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::UMaterialExpressionDataDrivenShaderPlatformInfoSwitch() {
    this->bContainsInvalidProperty = false;
}

TArray<FString> UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::GetNameOptions() const {
    return TArray<FString>();
}


